import org.apache.spark.SparkConf
import org.apache.spark.rdd.RDD
import org.apache.spark.SparkContext
import java.io._
import scala.io.Source
import java.nio.file._

object ScpFile {
//  def subdirs(dir: File): Iterator = {
//    val children = dir.listFiles.filter(_.isDirectory)
//    children.toIterator ++ children.toIterator.flatMap(subdirs_)
//  }
 
  def subdirs2(dir: File): Iterator[File] = {  
        val d = dir.listFiles.filter(_.isDirectory)  
        val f = dir.listFiles.filter(_.isFile).toIterator  
        f ++ d.toIterator.flatMap(subdirs2 _)  
  }   
 
   
  def mkdirs(filepath: String){
    val fp = new File(filepath)
    if(!fp.exists()){
      fp.mkdirs()
    }
  } 

  def main(args: Array[String]) {    
    val conf = new SparkConf().setAppName("Simple Application")
    val sc = new SparkContext(conf)
    val totalRank = conf.get("spark.cores.max").toInt + 1
    val commander: RDD[Int] = sc.parallelize(Range(1,totalRank),totalRank - 1)
    commander.map(x => mkdirs(args(0))).count()
    for (d <- subdirs2(new File(args(0)))) {
      val path: String = d.getPath
      val out: Array[Byte] = Files.readAllBytes(Paths.get(path))
      val outBC = sc.broadcast(out)
      commander.map(x => Files.write(Paths.get(path), outBC.value)).count()
    }  
  }
}
