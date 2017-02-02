#!/usr/bin/env bash


$SPARK_HOME/bin/spark-submit \
    --class "ScpFile" \
    --master spark://$localname:7077 \
    --conf spark.cores.max=3 \
    --conf spark.driver.memory=80g \
    --conf spark.executor.memory=80g \
    target/scala-2.10/simple-project_2.10-1.0.jar \
    /home/qhuang/relion-data/relion_data/Micrographs
