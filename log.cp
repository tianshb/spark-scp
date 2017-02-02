Using Spark's default log4j profile: org/apache/spark/log4j-defaults.properties
16/07/22 04:15:21 INFO SparkContext: Running Spark version 1.4.0
16/07/22 04:15:22 WARN NativeCodeLoader: Unable to load native-hadoop library for your platform... using builtin-java classes where applicable
16/07/22 04:15:22 INFO SecurityManager: Changing view acls to: wzy
16/07/22 04:15:22 INFO SecurityManager: Changing modify acls to: wzy
16/07/22 04:15:22 INFO SecurityManager: SecurityManager: authentication disabled; ui acls disabled; users with view permissions: Set(wzy); users with modify permissions: Set(wzy)
16/07/22 04:15:22 INFO Slf4jLogger: Slf4jLogger started
16/07/22 04:15:22 INFO Remoting: Starting remoting
16/07/22 04:15:23 INFO Remoting: Remoting started; listening on addresses :[akka.tcp://sparkDriver@192.168.110.88:50863]
16/07/22 04:15:23 INFO Utils: Successfully started service 'sparkDriver' on port 50863.
16/07/22 04:15:23 INFO SparkEnv: Registering MapOutputTracker
16/07/22 04:15:23 INFO SparkEnv: Registering BlockManagerMaster
16/07/22 04:15:23 INFO DiskBlockManager: Created local directory at /home/wzy/tmp/spark-5fec7fb2-b3e3-401b-8e29-d63576c26a12/blockmgr-c7fc4245-053c-4731-830c-d398ebe3d0be
16/07/22 04:15:23 INFO MemoryStore: MemoryStore started with capacity 265.4 MB
16/07/22 04:15:23 INFO HttpFileServer: HTTP File server directory is /home/wzy/tmp/spark-5fec7fb2-b3e3-401b-8e29-d63576c26a12/httpd-3057d5d5-0884-4c4e-89cd-d44e7bc6a11c
16/07/22 04:15:23 INFO HttpServer: Starting HTTP Server
16/07/22 04:15:23 INFO Utils: Successfully started service 'HTTP file server' on port 33379.
16/07/22 04:15:23 INFO SparkEnv: Registering OutputCommitCoordinator
16/07/22 04:15:23 INFO Utils: Successfully started service 'SparkUI' on port 4040.
16/07/22 04:15:23 INFO SparkUI: Started SparkUI at http://10.2.2.132:4040
16/07/22 04:15:23 INFO SparkContext: Added JAR file:/home/wzy/sparkscp/target/scala-2.10/simple-project_2.10-1.0.jar at http://192.168.110.88:33379/jars/simple-project_2.10-1.0.jar with timestamp 1469160923562
16/07/22 04:15:23 INFO AppClient$ClientActor: Connecting to master akka.tcp://sparkMaster@master:7077/user/Master...
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Connected to Spark cluster with app ID app-20160722041523-0002
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/0 on worker-20160722030251-192.168.100.23-43374 (192.168.100.23:43374) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/0 on hostPort 192.168.100.23:43374 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/1 on worker-20160722030303-192.168.100.44-38404 (192.168.100.44:38404) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/1 on hostPort 192.168.100.44:38404 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/2 on worker-20160722030303-192.168.100.184-51536 (192.168.100.184:51536) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/2 on hostPort 192.168.100.184:51536 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/3 on worker-20160722030303-192.168.100.46-55573 (192.168.100.46:55573) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/3 on hostPort 192.168.100.46:55573 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/4 on worker-20160722030303-192.168.110.228-39841 (192.168.110.228:39841) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/4 on hostPort 192.168.110.228:39841 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/5 on worker-20160722030258-192.168.110.162-39468 (192.168.110.162:39468) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/5 on hostPort 192.168.110.162:39468 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/6 on worker-20160722030256-192.168.100.27-60293 (192.168.100.27:60293) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/6 on hostPort 192.168.100.27:60293 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/7 on worker-20160722030302-192.168.110.227-41258 (192.168.110.227:41258) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/7 on hostPort 192.168.110.227:41258 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/8 on worker-20160722030305-192.168.110.154-54502 (192.168.110.154:54502) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/8 on hostPort 192.168.110.154:54502 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/9 on worker-20160722030249-192.168.110.132-52910 (192.168.110.132:52910) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/9 on hostPort 192.168.110.132:52910 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/10 on worker-20160722030250-192.168.110.169-60809 (192.168.110.169:60809) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/10 on hostPort 192.168.110.169:60809 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/11 on worker-20160722030307-192.168.110.245-53059 (192.168.110.245:53059) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/11 on hostPort 192.168.110.245:53059 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/12 on worker-20160722030303-192.168.100.45-57202 (192.168.100.45:57202) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/12 on hostPort 192.168.100.45:57202 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/13 on worker-20160722030306-192.168.100.253-54564 (192.168.100.253:54564) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/13 on hostPort 192.168.100.253:54564 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/14 on worker-20160722030249-192.168.110.188-34618 (192.168.110.188:34618) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/14 on hostPort 192.168.110.188:34618 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/15 on worker-20160722030249-192.168.110.201-39987 (192.168.110.201:39987) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/15 on hostPort 192.168.110.201:39987 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/16 on worker-20160722030303-192.168.100.43-59774 (192.168.100.43:59774) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/16 on hostPort 192.168.100.43:59774 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/17 on worker-20160722030256-192.168.110.171-46227 (192.168.110.171:46227) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/17 on hostPort 192.168.110.171:46227 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/18 on worker-20160722030248-192.168.110.112-54000 (192.168.110.112:54000) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/18 on hostPort 192.168.110.112:54000 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/19 on worker-20160722030257-192.168.110.139-50111 (192.168.110.139:50111) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/19 on hostPort 192.168.110.139:50111 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/20 on worker-20160722030302-192.168.110.234-59129 (192.168.110.234:59129) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/20 on hostPort 192.168.110.234:59129 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/21 on worker-20160722030303-192.168.100.191-43854 (192.168.100.191:43854) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/21 on hostPort 192.168.100.191:43854 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/22 on worker-20160722030303-192.168.100.250-53236 (192.168.100.250:53236) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/22 on hostPort 192.168.100.250:53236 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/23 on worker-20160722030303-192.168.100.52-59917 (192.168.100.52:59917) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/23 on hostPort 192.168.100.52:59917 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/24 on worker-20160722030307-192.168.100.194-44344 (192.168.100.194:44344) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/24 on hostPort 192.168.100.194:44344 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/25 on worker-20160722030303-192.168.110.254-49079 (192.168.110.254:49079) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/25 on hostPort 192.168.110.254:49079 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/26 on worker-20160722030249-192.168.110.191-33131 (192.168.110.191:33131) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/26 on hostPort 192.168.110.191:33131 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/27 on worker-20160722030257-192.168.110.167-47640 (192.168.110.167:47640) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/27 on hostPort 192.168.110.167:47640 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/28 on worker-20160722030308-192.168.110.116-38112 (192.168.110.116:38112) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/28 on hostPort 192.168.110.116:38112 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/29 on worker-20160722030250-192.168.110.181-52351 (192.168.110.181:52351) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/29 on hostPort 192.168.110.181:52351 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/30 on worker-20160722030257-192.168.110.130-46784 (192.168.110.130:46784) with 1 cores
16/07/22 04:15:23 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/30 on hostPort 192.168.110.130:46784 with 1 cores, 512.0 MB RAM
16/07/22 04:15:23 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/31 on worker-20160722030303-192.168.110.255-60344 (192.168.110.255:60344) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/31 on hostPort 192.168.110.255:60344 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/32 on worker-20160722030257-192.168.110.151-53426 (192.168.110.151:53426) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/32 on hostPort 192.168.110.151:53426 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/33 on worker-20160722030303-192.168.100.222-55001 (192.168.100.222:55001) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/33 on hostPort 192.168.100.222:55001 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/34 on worker-20160722030306-192.168.110.218-58643 (192.168.110.218:58643) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/34 on hostPort 192.168.110.218:58643 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/35 on worker-20160722030307-192.168.100.224-37426 (192.168.100.224:37426) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/35 on hostPort 192.168.100.224:37426 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/36 on worker-20160722030257-192.168.110.113-60379 (192.168.110.113:60379) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/36 on hostPort 192.168.110.113:60379 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/37 on worker-20160722030303-192.168.110.208-51078 (192.168.110.208:51078) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/37 on hostPort 192.168.110.208:51078 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/38 on worker-20160722030307-192.168.110.235-57171 (192.168.110.235:57171) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/38 on hostPort 192.168.110.235:57171 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/39 on worker-20160722030251-192.168.110.147-51939 (192.168.110.147:51939) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/39 on hostPort 192.168.110.147:51939 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/40 on worker-20160722030303-192.168.100.210-48640 (192.168.100.210:48640) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/40 on hostPort 192.168.100.210:48640 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/41 on worker-20160722030303-192.168.110.236-43086 (192.168.110.236:43086) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/41 on hostPort 192.168.110.236:43086 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/42 on worker-20160722030302-192.168.110.138-47240 (192.168.110.138:47240) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/42 on hostPort 192.168.110.138:47240 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/43 on worker-20160722030249-192.168.110.119-46544 (192.168.110.119:46544) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/43 on hostPort 192.168.110.119:46544 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/44 on worker-20160722030303-192.168.100.42-34648 (192.168.100.42:34648) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/44 on hostPort 192.168.100.42:34648 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/45 on worker-20160722030306-192.168.100.189-54358 (192.168.100.189:54358) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/45 on hostPort 192.168.100.189:54358 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/46 on worker-20160722030303-192.168.100.195-54754 (192.168.100.195:54754) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/46 on hostPort 192.168.100.195:54754 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/47 on worker-20160722030306-192.168.100.190-50214 (192.168.100.190:50214) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/47 on hostPort 192.168.100.190:50214 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/48 on worker-20160722030306-192.168.110.251-40055 (192.168.110.251:40055) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/48 on hostPort 192.168.110.251:40055 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/49 on worker-20160722030303-192.168.110.166-50484 (192.168.110.166:50484) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/49 on hostPort 192.168.110.166:50484 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/50 on worker-20160722030303-192.168.100.233-35960 (192.168.100.233:35960) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/50 on hostPort 192.168.100.233:35960 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/51 on worker-20160722030303-192.168.100.247-56754 (192.168.100.247:56754) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/51 on hostPort 192.168.100.247:56754 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/52 on worker-20160722030303-192.168.110.232-59686 (192.168.110.232:59686) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/52 on hostPort 192.168.110.232:59686 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/53 on worker-20160722030303-192.168.110.241-38962 (192.168.110.241:38962) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/53 on hostPort 192.168.110.241:38962 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/54 on worker-20160722030257-192.168.110.128-35100 (192.168.110.128:35100) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/54 on hostPort 192.168.110.128:35100 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/55 on worker-20160722030257-192.168.110.144-37732 (192.168.110.144:37732) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/55 on hostPort 192.168.110.144:37732 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/56 on worker-20160722030257-192.168.110.156-43685 (192.168.110.156:43685) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/56 on hostPort 192.168.110.156:43685 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/57 on worker-20160722030306-192.168.100.40-57252 (192.168.100.40:57252) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/57 on hostPort 192.168.100.40:57252 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/58 on worker-20160722030302-192.168.100.185-59314 (192.168.100.185:59314) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/58 on hostPort 192.168.100.185:59314 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/59 on worker-20160722030257-192.168.110.164-54101 (192.168.110.164:54101) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/59 on hostPort 192.168.110.164:54101 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/60 on worker-20160722030303-192.168.100.248-39790 (192.168.100.248:39790) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/60 on hostPort 192.168.100.248:39790 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/61 on worker-20160722030303-192.168.100.221-41399 (192.168.100.221:41399) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/61 on hostPort 192.168.100.221:41399 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/62 on worker-20160722030302-192.168.100.244-54257 (192.168.100.244:54257) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/62 on hostPort 192.168.100.244:54257 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/63 on worker-20160722030250-192.168.100.22-59393 (192.168.100.22:59393) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/63 on hostPort 192.168.100.22:59393 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/64 on worker-20160722030257-192.168.110.123-52500 (192.168.110.123:52500) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/64 on hostPort 192.168.110.123:52500 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/65 on worker-20160722030301-192.168.100.239-36229 (192.168.100.239:36229) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/65 on hostPort 192.168.100.239:36229 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/66 on worker-20160722030302-192.168.100.217-53738 (192.168.100.217:53738) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/66 on hostPort 192.168.100.217:53738 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/67 on worker-20160722030303-192.168.110.240-55945 (192.168.110.240:55945) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/67 on hostPort 192.168.110.240:55945 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/68 on worker-20160722030249-192.168.110.114-48559 (192.168.110.114:48559) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/68 on hostPort 192.168.110.114:48559 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/69 on worker-20160722030250-192.168.100.26-50065 (192.168.100.26:50065) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/69 on hostPort 192.168.100.26:50065 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/70 on worker-20160722030303-192.168.100.183-46601 (192.168.100.183:46601) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/70 on hostPort 192.168.100.183:46601 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/71 on worker-20160722030327-192.168.100.33-55638 (192.168.100.33:55638) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/71 on hostPort 192.168.100.33:55638 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/72 on worker-20160722030253-192.168.110.160-33311 (192.168.110.160:33311) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/72 on hostPort 192.168.110.160:33311 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/73 on worker-20160722030250-192.168.110.153-36589 (192.168.110.153:36589) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/73 on hostPort 192.168.110.153:36589 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/74 on worker-20160722030249-192.168.110.192-47914 (192.168.110.192:47914) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/74 on hostPort 192.168.110.192:47914 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/75 on worker-20160722030249-192.168.110.145-38590 (192.168.110.145:38590) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/75 on hostPort 192.168.110.145:38590 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/76 on worker-20160722030306-192.168.100.196-50067 (192.168.100.196:50067) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/76 on hostPort 192.168.100.196:50067 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/77 on worker-20160722030305-192.168.110.225-52526 (192.168.110.225:52526) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/77 on hostPort 192.168.110.225:52526 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/78 on worker-20160722030257-192.168.110.202-44953 (192.168.110.202:44953) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/78 on hostPort 192.168.110.202:44953 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/79 on worker-20160722030303-192.168.110.122-57739 (192.168.110.122:57739) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/79 on hostPort 192.168.110.122:57739 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/80 on worker-20160722030257-192.168.110.152-38794 (192.168.110.152:38794) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/80 on hostPort 192.168.110.152:38794 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/81 on worker-20160722030303-192.168.110.231-47652 (192.168.110.231:47652) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/81 on hostPort 192.168.110.231:47652 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/82 on worker-20160722030303-192.168.110.223-52268 (192.168.110.223:52268) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/82 on hostPort 192.168.110.223:52268 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/83 on worker-20160722030251-192.168.110.117-34428 (192.168.110.117:34428) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/83 on hostPort 192.168.110.117:34428 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/84 on worker-20160722030256-192.168.110.207-58167 (192.168.110.207:58167) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/84 on hostPort 192.168.110.207:58167 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/85 on worker-20160722030307-192.168.100.213-52478 (192.168.100.213:52478) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/85 on hostPort 192.168.100.213:52478 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/86 on worker-20160722030303-192.168.100.204-38934 (192.168.100.204:38934) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/86 on hostPort 192.168.100.204:38934 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/87 on worker-20160722030301-192.168.110.216-43685 (192.168.110.216:43685) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/87 on hostPort 192.168.110.216:43685 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/88 on worker-20160722030249-192.168.110.212-45295 (192.168.110.212:45295) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/88 on hostPort 192.168.110.212:45295 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/89 on worker-20160722030259-192.168.100.243-48190 (192.168.100.243:48190) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/89 on hostPort 192.168.100.243:48190 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/90 on worker-20160722030303-192.168.100.188-33172 (192.168.100.188:33172) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/90 on hostPort 192.168.100.188:33172 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/91 on worker-20160722030303-192.168.110.247-43898 (192.168.110.247:43898) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/91 on hostPort 192.168.110.247:43898 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/92 on worker-20160722030307-192.168.100.179-56503 (192.168.100.179:56503) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/92 on hostPort 192.168.100.179:56503 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/93 on worker-20160722030303-192.168.100.206-59811 (192.168.100.206:59811) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/93 on hostPort 192.168.100.206:59811 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/94 on worker-20160722030249-192.168.110.165-54953 (192.168.110.165:54953) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/94 on hostPort 192.168.110.165:54953 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/95 on worker-20160722030256-192.168.110.146-34189 (192.168.110.146:34189) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/95 on hostPort 192.168.110.146:34189 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/96 on worker-20160722030250-192.168.110.185-38401 (192.168.110.185:38401) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/96 on hostPort 192.168.110.185:38401 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/97 on worker-20160722030307-192.168.100.215-40780 (192.168.100.215:40780) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/97 on hostPort 192.168.100.215:40780 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/98 on worker-20160722030303-192.168.100.180-35716 (192.168.100.180:35716) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/98 on hostPort 192.168.100.180:35716 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/99 on worker-20160722030306-192.168.100.58-42855 (192.168.100.58:42855) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/99 on hostPort 192.168.100.58:42855 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/100 on worker-20160722030303-192.168.110.244-43111 (192.168.110.244:43111) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/100 on hostPort 192.168.110.244:43111 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/101 on worker-20160722030306-192.168.110.220-44154 (192.168.110.220:44154) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/101 on hostPort 192.168.110.220:44154 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/102 on worker-20160722030302-192.168.110.148-35530 (192.168.110.148:35530) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/102 on hostPort 192.168.110.148:35530 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/103 on worker-20160722030250-192.168.100.30-56679 (192.168.100.30:56679) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/103 on hostPort 192.168.100.30:56679 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/104 on worker-20160722030258-192.168.110.209-50897 (192.168.110.209:50897) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/104 on hostPort 192.168.110.209:50897 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/105 on worker-20160722030258-192.168.110.155-53763 (192.168.110.155:53763) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/105 on hostPort 192.168.110.155:53763 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/106 on worker-20160722030324-192.168.110.203-59646 (192.168.110.203:59646) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/106 on hostPort 192.168.110.203:59646 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/107 on worker-20160722030255-192.168.110.120-46539 (192.168.110.120:46539) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/107 on hostPort 192.168.110.120:46539 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/108 on worker-20160722030302-192.168.110.219-57780 (192.168.110.219:57780) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/108 on hostPort 192.168.110.219:57780 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/109 on worker-20160722030257-192.168.110.134-39215 (192.168.110.134:39215) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/109 on hostPort 192.168.110.134:39215 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/110 on worker-20160722030305-192.168.110.200-57200 (192.168.110.200:57200) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/110 on hostPort 192.168.110.200:57200 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/111 on worker-20160722030302-192.168.110.136-56739 (192.168.110.136:56739) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/111 on hostPort 192.168.110.136:56739 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/112 on worker-20160722030303-192.168.100.234-55912 (192.168.100.234:55912) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/112 on hostPort 192.168.100.234:55912 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/113 on worker-20160722030249-192.168.100.21-57222 (192.168.100.21:57222) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/113 on hostPort 192.168.100.21:57222 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/114 on worker-20160722030306-192.168.110.249-40675 (192.168.110.249:40675) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/114 on hostPort 192.168.110.249:40675 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/115 on worker-20160722030306-192.168.100.225-57070 (192.168.100.225:57070) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/115 on hostPort 192.168.100.225:57070 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/116 on worker-20160722030306-192.168.100.53-54708 (192.168.100.53:54708) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/116 on hostPort 192.168.100.53:54708 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/117 on worker-20160722030249-192.168.110.157-33058 (192.168.110.157:33058) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/117 on hostPort 192.168.110.157:33058 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/118 on worker-20160722030257-192.168.110.180-39433 (192.168.110.180:39433) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/118 on hostPort 192.168.110.180:39433 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/119 on worker-20160722030249-192.168.110.126-59172 (192.168.110.126:59172) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/119 on hostPort 192.168.110.126:59172 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/120 on worker-20160722030251-192.168.110.178-45090 (192.168.110.178:45090) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/120 on hostPort 192.168.110.178:45090 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/121 on worker-20160722030307-192.168.110.111-52550 (192.168.110.111:52550) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/121 on hostPort 192.168.110.111:52550 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/122 on worker-20160722030306-192.168.100.219-55504 (192.168.100.219:55504) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/122 on hostPort 192.168.100.219:55504 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/123 on worker-20160722030303-192.168.100.237-57642 (192.168.100.237:57642) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/123 on hostPort 192.168.100.237:57642 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/124 on worker-20160722030249-192.168.110.197-48532 (192.168.110.197:48532) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/124 on hostPort 192.168.110.197:48532 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/125 on worker-20160722030306-192.168.100.226-53401 (192.168.100.226:53401) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/125 on hostPort 192.168.100.226:53401 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/126 on worker-20160722030249-192.168.110.158-49752 (192.168.110.158:49752) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/126 on hostPort 192.168.110.158:49752 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/127 on worker-20160722030257-192.168.110.184-33697 (192.168.110.184:33697) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/127 on hostPort 192.168.110.184:33697 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/128 on worker-20160722030250-192.168.110.115-43086 (192.168.110.115:43086) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/128 on hostPort 192.168.110.115:43086 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/129 on worker-20160722030306-192.168.100.223-56761 (192.168.100.223:56761) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/129 on hostPort 192.168.100.223:56761 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/130 on worker-20160722030306-192.168.100.242-54541 (192.168.100.242:54541) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/130 on hostPort 192.168.100.242:54541 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/131 on worker-20160722030306-192.168.110.221-41690 (192.168.110.221:41690) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/131 on hostPort 192.168.110.221:41690 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/132 on worker-20160722030307-192.168.100.228-43853 (192.168.100.228:43853) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/132 on hostPort 192.168.100.228:43853 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/133 on worker-20160722030307-192.168.110.248-35098 (192.168.110.248:35098) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/133 on hostPort 192.168.110.248:35098 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/134 on worker-20160722030249-192.168.110.195-45426 (192.168.110.195:45426) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/134 on hostPort 192.168.110.195:45426 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/135 on worker-20160722030306-192.168.100.61-46084 (192.168.100.61:46084) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/135 on hostPort 192.168.100.61:46084 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/136 on worker-20160722030306-192.168.110.177-50047 (192.168.110.177:50047) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/136 on hostPort 192.168.110.177:50047 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/137 on worker-20160722030302-192.168.100.192-41586 (192.168.100.192:41586) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/137 on hostPort 192.168.100.192:41586 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/138 on worker-20160722030306-192.168.110.186-48728 (192.168.110.186:48728) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/138 on hostPort 192.168.110.186:48728 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/139 on worker-20160722030307-192.168.100.240-53010 (192.168.100.240:53010) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/139 on hostPort 192.168.100.240:53010 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/140 on worker-20160722030306-192.168.110.230-60224 (192.168.110.230:60224) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/140 on hostPort 192.168.110.230:60224 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/141 on worker-20160722030307-192.168.100.211-46870 (192.168.100.211:46870) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/141 on hostPort 192.168.100.211:46870 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/142 on worker-20160722030249-192.168.110.125-36045 (192.168.110.125:36045) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/142 on hostPort 192.168.110.125:36045 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/143 on worker-20160722030302-192.168.110.226-33131 (192.168.110.226:33131) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/143 on hostPort 192.168.110.226:33131 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/144 on worker-20160722030307-192.168.100.205-54378 (192.168.100.205:54378) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/144 on hostPort 192.168.100.205:54378 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/145 on worker-20160722030306-192.168.100.55-48899 (192.168.100.55:48899) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/145 on hostPort 192.168.100.55:48899 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/146 on worker-20160722030306-192.168.110.253-48418 (192.168.110.253:48418) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/146 on hostPort 192.168.110.253:48418 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/147 on worker-20160722030302-192.168.110.190-47675 (192.168.110.190:47675) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/147 on hostPort 192.168.110.190:47675 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/148 on worker-20160722030258-192.168.110.198-33653 (192.168.110.198:33653) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/148 on hostPort 192.168.110.198:33653 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/149 on worker-20160722030307-192.168.110.193-49715 (192.168.110.193:49715) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/149 on hostPort 192.168.110.193:49715 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/150 on worker-20160722030302-192.168.110.174-36881 (192.168.110.174:36881) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/150 on hostPort 192.168.110.174:36881 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/151 on worker-20160722030303-192.168.100.241-49333 (192.168.100.241:49333) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/151 on hostPort 192.168.100.241:49333 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/152 on worker-20160722030305-192.168.100.35-60566 (192.168.100.35:60566) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/152 on hostPort 192.168.100.35:60566 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/153 on worker-20160722030257-192.168.110.124-37529 (192.168.110.124:37529) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/153 on hostPort 192.168.110.124:37529 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/154 on worker-20160722030306-192.168.110.252-48446 (192.168.110.252:48446) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/154 on hostPort 192.168.110.252:48446 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/155 on worker-20160722030307-192.168.100.245-42058 (192.168.100.245:42058) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/155 on hostPort 192.168.100.245:42058 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/156 on worker-20160722030303-192.168.110.242-46782 (192.168.110.242:46782) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/156 on hostPort 192.168.110.242:46782 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/157 on worker-20160722030257-192.168.110.179-59547 (192.168.110.179:59547) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/157 on hostPort 192.168.110.179:59547 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/158 on worker-20160722030249-192.168.110.121-58987 (192.168.110.121:58987) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/158 on hostPort 192.168.110.121:58987 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO Utils: Successfully started service 'org.apache.spark.network.netty.NettyBlockTransferService' on port 60922.
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/159 on worker-20160722030253-192.168.110.199-49667 (192.168.110.199:49667) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/159 on hostPort 192.168.110.199:49667 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO NettyBlockTransferService: Server created on 60922
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/160 on worker-20160722030306-192.168.100.214-56827 (192.168.100.214:56827) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/160 on hostPort 192.168.100.214:56827 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/161 on worker-20160722030303-192.168.110.246-33740 (192.168.110.246:33740) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/161 on hostPort 192.168.110.246:33740 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO BlockManagerMaster: Trying to register BlockManager
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/162 on worker-20160722030249-192.168.110.140-55868 (192.168.110.140:55868) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/162 on hostPort 192.168.110.140:55868 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/163 on worker-20160722030302-192.168.110.161-55696 (192.168.110.161:55696) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/163 on hostPort 192.168.110.161:55696 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.88:60922 with 265.4 MB RAM, BlockManagerId(driver, 192.168.110.88, 60922)
16/07/22 04:15:24 INFO BlockManagerMaster: Registered BlockManager
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/164 on worker-20160722030252-192.168.100.24-51944 (192.168.100.24:51944) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/164 on hostPort 192.168.100.24:51944 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/165 on worker-20160722030251-192.168.110.182-51022 (192.168.110.182:51022) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/165 on hostPort 192.168.110.182:51022 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/166 on worker-20160722030249-192.168.110.173-56308 (192.168.110.173:56308) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/166 on hostPort 192.168.110.173:56308 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/167 on worker-20160722030307-192.168.100.37-59361 (192.168.100.37:59361) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/167 on hostPort 192.168.100.37:59361 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/168 on worker-20160722030306-192.168.110.243-49203 (192.168.110.243:49203) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/168 on hostPort 192.168.110.243:49203 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/169 on worker-20160722030303-192.168.110.237-46332 (192.168.110.237:46332) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/169 on hostPort 192.168.110.237:46332 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/170 on worker-20160722030302-192.168.110.210-49543 (192.168.110.210:49543) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/170 on hostPort 192.168.110.210:49543 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/171 on worker-20160722030249-192.168.110.183-33290 (192.168.110.183:33290) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/171 on hostPort 192.168.110.183:33290 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/172 on worker-20160722030302-192.168.110.129-49025 (192.168.110.129:49025) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/172 on hostPort 192.168.110.129:49025 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/173 on worker-20160722030307-192.168.100.64-34275 (192.168.100.64:34275) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/173 on hostPort 192.168.100.64:34275 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/174 on worker-20160722030259-192.168.110.170-51633 (192.168.110.170:51633) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/174 on hostPort 192.168.110.170:51633 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/175 on worker-20160722030303-192.168.110.238-32787 (192.168.110.238:32787) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/175 on hostPort 192.168.110.238:32787 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/176 on worker-20160722030258-192.168.110.172-59466 (192.168.110.172:59466) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/176 on hostPort 192.168.110.172:59466 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/177 on worker-20160722030249-192.168.110.163-55293 (192.168.110.163:55293) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/177 on hostPort 192.168.110.163:55293 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/178 on worker-20160722030257-192.168.110.204-40771 (192.168.110.204:40771) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/178 on hostPort 192.168.110.204:40771 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/179 on worker-20160722030306-192.168.110.229-35263 (192.168.110.229:35263) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/179 on hostPort 192.168.110.229:35263 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/180 on worker-20160722030257-192.168.110.211-40289 (192.168.110.211:40289) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/180 on hostPort 192.168.110.211:40289 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/181 on worker-20160722030325-192.168.100.32-47356 (192.168.100.32:47356) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/181 on hostPort 192.168.100.32:47356 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/182 on worker-20160722030306-192.168.110.239-36571 (192.168.110.239:36571) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/182 on hostPort 192.168.110.239:36571 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/183 on worker-20160722030249-192.168.110.176-55497 (192.168.110.176:55497) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/183 on hostPort 192.168.110.176:55497 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/184 on worker-20160722030249-192.168.110.143-36193 (192.168.110.143:36193) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/184 on hostPort 192.168.110.143:36193 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/185 on worker-20160722030303-192.168.100.246-47546 (192.168.100.246:47546) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/185 on hostPort 192.168.100.246:47546 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/186 on worker-20160722030307-192.168.100.238-51941 (192.168.100.238:51941) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/186 on hostPort 192.168.100.238:51941 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/187 on worker-20160722030306-192.168.100.254-56842 (192.168.100.254:56842) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/187 on hostPort 192.168.100.254:56842 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/188 on worker-20160722030306-192.168.100.65-49104 (192.168.100.65:49104) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/188 on hostPort 192.168.100.65:49104 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/189 on worker-20160722030306-192.168.100.218-55572 (192.168.100.218:55572) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/189 on hostPort 192.168.100.218:55572 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/190 on worker-20160722030257-192.168.110.110-45610 (192.168.110.110:45610) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/190 on hostPort 192.168.110.110:45610 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/191 on worker-20160722030306-192.168.100.236-34251 (192.168.100.236:34251) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/191 on hostPort 192.168.100.236:34251 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/192 on worker-20160722030252-192.168.110.127-43165 (192.168.110.127:43165) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/192 on hostPort 192.168.110.127:43165 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/193 on worker-20160722030326-192.168.100.252-58335 (192.168.100.252:58335) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/193 on hostPort 192.168.100.252:58335 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/194 on worker-20160722030250-192.168.100.25-48711 (192.168.100.25:48711) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/194 on hostPort 192.168.100.25:48711 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/195 on worker-20160722030257-192.168.110.133-52987 (192.168.110.133:52987) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/195 on hostPort 192.168.110.133:52987 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/196 on worker-20160722030306-192.168.100.251-43229 (192.168.100.251:43229) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/196 on hostPort 192.168.100.251:43229 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/197 on worker-20160722030306-192.168.110.250-41143 (192.168.110.250:41143) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/197 on hostPort 192.168.110.250:41143 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/198 on worker-20160722030306-192.168.100.50-34051 (192.168.100.50:34051) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/198 on hostPort 192.168.100.50:34051 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/199 on worker-20160722030257-192.168.110.149-47242 (192.168.110.149:47242) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/199 on hostPort 192.168.110.149:47242 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/200 on worker-20160722030306-192.168.100.34-34457 (192.168.100.34:34457) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/200 on hostPort 192.168.100.34:34457 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/201 on worker-20160722030301-192.168.100.47-33250 (192.168.100.47:33250) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/201 on hostPort 192.168.100.47:33250 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/202 on worker-20160722030306-192.168.100.60-42837 (192.168.100.60:42837) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/202 on hostPort 192.168.100.60:42837 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/203 on worker-20160722030307-192.168.100.229-33953 (192.168.100.229:33953) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/203 on hostPort 192.168.100.229:33953 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/204 on worker-20160722030257-192.168.110.206-45087 (192.168.110.206:45087) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/204 on hostPort 192.168.110.206:45087 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/205 on worker-20160722030308-192.168.100.212-41300 (192.168.100.212:41300) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/205 on hostPort 192.168.100.212:41300 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/206 on worker-20160722030303-192.168.100.230-35711 (192.168.100.230:35711) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/206 on hostPort 192.168.100.230:35711 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/207 on worker-20160722030248-192.168.110.150-54084 (192.168.110.150:54084) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/207 on hostPort 192.168.110.150:54084 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/208 on worker-20160722030309-192.168.111.0-47639 (192.168.111.0:47639) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/208 on hostPort 192.168.111.0:47639 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/209 on worker-20160722030303-192.168.100.187-50940 (192.168.100.187:50940) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/209 on hostPort 192.168.100.187:50940 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/210 on worker-20160722030257-192.168.110.205-46602 (192.168.110.205:46602) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/210 on hostPort 192.168.110.205:46602 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/211 on worker-20160722030250-192.168.100.28-49067 (192.168.100.28:49067) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/211 on hostPort 192.168.100.28:49067 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/212 on worker-20160722030307-192.168.100.63-35361 (192.168.100.63:35361) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/212 on hostPort 192.168.100.63:35361 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/213 on worker-20160722030306-192.168.100.249-40245 (192.168.100.249:40245) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/213 on hostPort 192.168.100.249:40245 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/214 on worker-20160722030302-192.168.110.217-42773 (192.168.110.217:42773) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/214 on hostPort 192.168.110.217:42773 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/215 on worker-20160722030303-192.168.100.193-51491 (192.168.100.193:51491) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/215 on hostPort 192.168.100.193:51491 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/216 on worker-20160722030251-192.168.110.214-34390 (192.168.110.214:34390) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/216 on hostPort 192.168.110.214:34390 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/217 on worker-20160722030306-192.168.100.231-44191 (192.168.100.231:44191) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/217 on hostPort 192.168.100.231:44191 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/218 on worker-20160722030306-192.168.100.41-60529 (192.168.100.41:60529) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/218 on hostPort 192.168.100.41:60529 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/219 on worker-20160722030307-192.168.100.227-51271 (192.168.100.227:51271) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/219 on hostPort 192.168.100.227:51271 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/220 on worker-20160722030306-192.168.100.39-56579 (192.168.100.39:56579) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/220 on hostPort 192.168.100.39:56579 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/221 on worker-20160722030250-192.168.110.118-42780 (192.168.110.118:42780) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/221 on hostPort 192.168.110.118:42780 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/222 on worker-20160722030303-192.168.110.224-51935 (192.168.110.224:51935) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/222 on hostPort 192.168.110.224:51935 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/223 on worker-20160722030257-192.168.110.189-55773 (192.168.110.189:55773) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/223 on hostPort 192.168.110.189:55773 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/224 on worker-20160722030306-192.168.100.38-41024 (192.168.100.38:41024) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/224 on hostPort 192.168.100.38:41024 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/225 on worker-20160722030302-192.168.100.182-45762 (192.168.100.182:45762) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/225 on hostPort 192.168.100.182:45762 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/226 on worker-20160722030250-192.168.110.196-54731 (192.168.110.196:54731) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/226 on hostPort 192.168.110.196:54731 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/227 on worker-20160722030249-192.168.100.31-43739 (192.168.100.31:43739) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/227 on hostPort 192.168.100.31:43739 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/228 on worker-20160722030301-192.168.110.233-56030 (192.168.110.233:56030) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/228 on hostPort 192.168.110.233:56030 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/229 on worker-20160722030254-192.168.110.194-52442 (192.168.110.194:52442) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/229 on hostPort 192.168.110.194:52442 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/230 on worker-20160722030305-192.168.100.181-57928 (192.168.100.181:57928) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/230 on hostPort 192.168.100.181:57928 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/231 on worker-20160722030257-192.168.110.168-41304 (192.168.110.168:41304) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/231 on hostPort 192.168.110.168:41304 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/232 on worker-20160722030256-192.168.100.29-59321 (192.168.100.29:59321) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/232 on hostPort 192.168.100.29:59321 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/233 on worker-20160722030249-192.168.110.159-48599 (192.168.110.159:48599) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/233 on hostPort 192.168.110.159:48599 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/234 on worker-20160722030306-192.168.110.187-44167 (192.168.110.187:44167) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/234 on hostPort 192.168.110.187:44167 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/235 on worker-20160722030303-192.168.100.235-47139 (192.168.100.235:47139) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/235 on hostPort 192.168.100.235:47139 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/236 on worker-20160722030306-192.168.100.220-37426 (192.168.100.220:37426) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/236 on hostPort 192.168.100.220:37426 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/237 on worker-20160722030303-192.168.100.186-43415 (192.168.100.186:43415) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/237 on hostPort 192.168.100.186:43415 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/238 on worker-20160722030302-192.168.110.222-46797 (192.168.110.222:46797) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/238 on hostPort 192.168.110.222:46797 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/239 on worker-20160722030257-192.168.110.135-38542 (192.168.110.135:38542) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/239 on hostPort 192.168.110.135:38542 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor added: app-20160722041523-0002/240 on worker-20160722030302-192.168.110.213-44360 (192.168.110.213:44360) with 1 cores
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: Granted executor ID app-20160722041523-0002/240 on hostPort 192.168.110.213:44360 with 1 cores, 512.0 MB RAM
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/2 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/4 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/0 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/6 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/9 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/10 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/11 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/7 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/17 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/16 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/21 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/20 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/19 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/5 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/15 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/3 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/13 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/14 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/12 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/18 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/22 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/23 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/29 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/24 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/1 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/26 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/28 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/36 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/31 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/30 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/33 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/27 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/39 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/25 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/35 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/34 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/8 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/32 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/40 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/38 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/37 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/44 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/41 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/45 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/42 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/47 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/57 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/43 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/46 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/48 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/49 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/51 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/54 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/61 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/53 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/56 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/50 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/65 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/70 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/59 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/71 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/58 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/0 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/1 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/2 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/3 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/4 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/5 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/52 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/55 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/60 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/64 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/66 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/62 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/67 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/68 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/63 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/73 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/72 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/80 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/74 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/75 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/83 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/6 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/7 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/77 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/82 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/78 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/85 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/81 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/76 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/79 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/87 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/86 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/84 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/88 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/90 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/89 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/69 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/97 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/103 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/92 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/93 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/99 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/94 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/96 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/91 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/100 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/102 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/101 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/95 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/113 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/114 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/115 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/98 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/104 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/108 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/112 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/110 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/123 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/116 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/119 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/122 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/126 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/111 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/120 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/109 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/106 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/129 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/8 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/121 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/105 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/107 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/117 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/130 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/132 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/125 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/124 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/127 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/131 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/133 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/118 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/128 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/136 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/134 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/137 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/141 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/9 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/144 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/10 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/138 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/11 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/139 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/12 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/140 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/151 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/150 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/147 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/146 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/135 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/149 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/148 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/145 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/142 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/153 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/154 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/13 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/152 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/143 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/161 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/155 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/156 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/169 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/157 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/159 is now LOADING
16/07/22 04:15:24 INFO EventLoggingListener: Logging events to file:///home/wzy/RelionLogs/app-20160722041523-0002
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/158 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/164 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/167 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/163 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/162 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/171 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/168 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/166 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/160 is now LOADING
16/07/22 04:15:24 INFO SparkDeploySchedulerBackend: SchedulerBackend is ready for scheduling beginning after reached minRegisteredResourcesRatio: 0.0
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/165 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/174 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/170 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/177 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/172 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/176 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/173 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/175 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/179 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/181 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/185 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/178 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/182 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/186 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/184 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/187 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/183 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/189 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/193 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/191 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/188 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/180 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/197 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/195 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/190 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/194 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/198 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/196 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/192 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/202 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/209 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/205 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/200 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/201 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/203 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/210 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/211 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/199 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/206 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/204 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/216 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/207 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/217 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/213 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/214 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/208 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/218 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/215 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/224 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/222 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/223 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/219 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/221 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/212 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/225 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/227 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/230 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/220 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/229 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/228 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/233 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/226 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/232 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/235 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/238 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/234 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/237 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/14 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/15 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/16 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/17 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/236 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/231 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/240 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/18 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/19 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/239 is now LOADING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/20 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/21 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/22 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/23 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/24 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/25 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/26 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/27 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/28 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/29 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/30 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/31 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/32 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/33 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/34 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/35 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/36 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/37 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/38 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/39 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/40 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/41 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/42 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/43 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/44 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/45 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/46 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/47 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/48 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/49 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/50 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/51 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/52 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/53 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/54 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/55 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/56 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/57 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/58 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/59 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/60 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/61 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/62 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/63 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/64 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/65 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/66 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/67 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/68 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/69 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/70 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/71 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/72 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/73 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/74 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/75 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/76 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/77 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/78 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/79 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/80 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/81 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/82 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/83 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/84 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/85 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/86 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/87 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/88 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/89 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/90 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/91 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/92 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/93 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/94 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/95 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/96 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/97 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/98 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/99 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/100 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/101 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/102 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/103 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/104 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/105 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/106 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/107 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/108 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/109 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/110 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/111 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/112 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/113 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/114 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/115 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/116 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/117 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/118 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/119 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/120 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/121 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/122 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/123 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/124 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/125 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/126 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/127 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/128 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/129 is now RUNNING
16/07/22 04:15:24 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/130 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/131 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/132 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/133 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/134 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/135 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/136 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/137 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/138 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/139 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/140 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/141 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/142 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/143 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/144 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/145 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/146 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/147 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/148 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/149 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/150 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/151 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/152 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/153 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/154 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/155 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/156 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/157 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/158 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/159 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/160 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/161 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/162 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/163 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/164 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/165 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/166 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/167 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/168 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/169 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/170 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/171 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/172 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/173 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/174 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/175 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/176 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/177 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/178 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/179 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/180 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/181 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/182 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/183 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/184 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/185 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/186 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/187 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/188 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/189 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/190 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/191 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/192 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/193 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/194 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/195 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/196 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/197 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/198 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/199 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/200 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/201 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/202 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/203 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/204 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/205 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/206 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/207 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/208 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/209 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/210 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/211 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/212 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/213 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/214 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/215 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/216 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/217 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/218 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/219 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/220 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/221 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/222 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/223 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/224 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/225 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/226 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/227 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/228 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/229 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/230 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/231 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/232 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/233 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/234 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/235 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/236 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/237 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/238 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/239 is now RUNNING
16/07/22 04:15:25 INFO AppClient$ClientActor: Executor updated: app-20160722041523-0002/240 is now RUNNING
16/07/22 04:15:25 INFO SparkContext: Starting job: count at ScpFile.scala:35
16/07/22 04:15:25 INFO DAGScheduler: Got job 0 (count at ScpFile.scala:35) with 241 output partitions (allowLocal=false)
16/07/22 04:15:25 INFO DAGScheduler: Final stage: ResultStage 0(count at ScpFile.scala:35)
16/07/22 04:15:25 INFO DAGScheduler: Parents of final stage: List()
16/07/22 04:15:25 INFO DAGScheduler: Missing parents: List()
16/07/22 04:15:25 INFO DAGScheduler: Submitting ResultStage 0 (MapPartitionsRDD[1] at map at ScpFile.scala:35), which has no missing parents
16/07/22 04:15:25 INFO MemoryStore: ensureFreeSpace(1824) called with curMem=0, maxMem=278302556
16/07/22 04:15:25 INFO MemoryStore: Block broadcast_0 stored as values in memory (estimated size 1824.0 B, free 265.4 MB)
16/07/22 04:15:25 INFO MemoryStore: ensureFreeSpace(1210) called with curMem=1824, maxMem=278302556
16/07/22 04:15:25 INFO MemoryStore: Block broadcast_0_piece0 stored as bytes in memory (estimated size 1210.0 B, free 265.4 MB)
16/07/22 04:15:25 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.88:60922 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:25 INFO SparkContext: Created broadcast 0 from broadcast at DAGScheduler.scala:874
16/07/22 04:15:25 INFO DAGScheduler: Submitting 241 missing tasks from ResultStage 0 (MapPartitionsRDD[1] at map at ScpFile.scala:35)
16/07/22 04:15:25 INFO TaskSchedulerImpl: Adding task set 0.0 with 241 tasks
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.227:33979/user/Executor#4393652]) with ID 7
16/07/22 04:15:27 INFO TaskSetManager: Starting task 0.0 in stage 0.0 (TID 0, 192.168.110.227, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.189:48852/user/Executor#1624476965]) with ID 45
16/07/22 04:15:27 INFO TaskSetManager: Starting task 1.0 in stage 0.0 (TID 1, 192.168.100.189, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.251:35206/user/Executor#1673815397]) with ID 48
16/07/22 04:15:27 INFO TaskSetManager: Starting task 2.0 in stage 0.0 (TID 2, 192.168.110.251, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.244:43825/user/Executor#-1964026422]) with ID 62
16/07/22 04:15:27 INFO TaskSetManager: Starting task 3.0 in stage 0.0 (TID 3, 192.168.100.244, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.253:46619/user/Executor#911464576]) with ID 13
16/07/22 04:15:27 INFO TaskSetManager: Starting task 4.0 in stage 0.0 (TID 4, 192.168.100.253, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.232:36973/user/Executor#2081002197]) with ID 52
16/07/22 04:15:27 INFO TaskSetManager: Starting task 5.0 in stage 0.0 (TID 5, 192.168.110.232, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.241:34043/user/Executor#281841954]) with ID 53
16/07/22 04:15:27 INFO TaskSetManager: Starting task 6.0 in stage 0.0 (TID 6, 192.168.110.241, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.210:41301/user/Executor#-1644577219]) with ID 40
16/07/22 04:15:27 INFO TaskSetManager: Starting task 7.0 in stage 0.0 (TID 7, 192.168.100.210, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.190:46032/user/Executor#-1035926785]) with ID 47
16/07/22 04:15:27 INFO TaskSetManager: Starting task 8.0 in stage 0.0 (TID 8, 192.168.100.190, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.184:37463/user/Executor#1231891734]) with ID 2
16/07/22 04:15:27 INFO TaskSetManager: Starting task 9.0 in stage 0.0 (TID 9, 192.168.100.184, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.46:51558/user/Executor#1660171866]) with ID 3
16/07/22 04:15:27 INFO TaskSetManager: Starting task 10.0 in stage 0.0 (TID 10, 192.168.100.46, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.44:55115/user/Executor#-1504705336]) with ID 1
16/07/22 04:15:27 INFO TaskSetManager: Starting task 11.0 in stage 0.0 (TID 11, 192.168.100.44, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.43:54597/user/Executor#-416712620]) with ID 16
16/07/22 04:15:27 INFO TaskSetManager: Starting task 12.0 in stage 0.0 (TID 12, 192.168.100.43, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.190:37296/user/Executor#689627733]) with ID 147
16/07/22 04:15:27 INFO TaskSetManager: Starting task 13.0 in stage 0.0 (TID 13, 192.168.110.190, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.245:49946/user/Executor#232684642]) with ID 11
16/07/22 04:15:27 INFO TaskSetManager: Starting task 14.0 in stage 0.0 (TID 14, 192.168.110.245, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.171:60356/user/Executor#569056776]) with ID 17
16/07/22 04:15:27 INFO TaskSetManager: Starting task 15.0 in stage 0.0 (TID 15, 192.168.110.171, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.191:36787/user/Executor#-776005344]) with ID 21
16/07/22 04:15:27 INFO TaskSetManager: Starting task 16.0 in stage 0.0 (TID 16, 192.168.100.191, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.167:36077/user/Executor#-303795932]) with ID 27
16/07/22 04:15:27 INFO TaskSetManager: Starting task 17.0 in stage 0.0 (TID 17, 192.168.110.167, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.223:46568/user/Executor#-1031255005]) with ID 82
16/07/22 04:15:27 INFO TaskSetManager: Starting task 18.0 in stage 0.0 (TID 18, 192.168.110.223, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.254:59205/user/Executor#1171221937]) with ID 25
16/07/22 04:15:27 INFO TaskSetManager: Starting task 19.0 in stage 0.0 (TID 19, 192.168.110.254, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.218:57925/user/Executor#1681522722]) with ID 34
16/07/22 04:15:27 INFO TaskSetManager: Starting task 20.0 in stage 0.0 (TID 20, 192.168.110.218, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.201:34933/user/Executor#497326244]) with ID 15
16/07/22 04:15:27 INFO TaskSetManager: Starting task 21.0 in stage 0.0 (TID 21, 192.168.110.201, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.240:32829/user/Executor#-2043010596]) with ID 67
16/07/22 04:15:27 INFO TaskSetManager: Starting task 22.0 in stage 0.0 (TID 22, 192.168.110.240, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.236:50869/user/Executor#-1505777690]) with ID 41
16/07/22 04:15:27 INFO TaskSetManager: Starting task 23.0 in stage 0.0 (TID 23, 192.168.110.236, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.33:48822/user/Executor#-900258643]) with ID 71
16/07/22 04:15:27 INFO TaskSetManager: Starting task 24.0 in stage 0.0 (TID 24, 192.168.100.33, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.181:44302/user/Executor#1859525267]) with ID 29
16/07/22 04:15:27 INFO TaskSetManager: Starting task 25.0 in stage 0.0 (TID 25, 192.168.110.181, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.221:39068/user/Executor#115138038]) with ID 61
16/07/22 04:15:27 INFO TaskSetManager: Starting task 26.0 in stage 0.0 (TID 26, 192.168.100.221, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.187:42947/user/Executor#1233673149]) with ID 209
16/07/22 04:15:27 INFO TaskSetManager: Starting task 27.0 in stage 0.0 (TID 27, 192.168.100.187, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.227:60941 with 265.4 MB RAM, BlockManagerId(7, 192.168.110.227, 60941)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.132:43611/user/Executor#298761065]) with ID 9
16/07/22 04:15:27 INFO TaskSetManager: Starting task 28.0 in stage 0.0 (TID 28, 192.168.110.132, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.235:56172/user/Executor#-1282041176]) with ID 38
16/07/22 04:15:27 INFO TaskSetManager: Starting task 29.0 in stage 0.0 (TID 29, 192.168.110.235, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.208:53822/user/Executor#-1773567029]) with ID 37
16/07/22 04:15:27 INFO TaskSetManager: Starting task 30.0 in stage 0.0 (TID 30, 192.168.110.208, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.212:53841/user/Executor#-206284320]) with ID 88
16/07/22 04:15:27 INFO TaskSetManager: Starting task 31.0 in stage 0.0 (TID 31, 192.168.110.212, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.112:49890/user/Executor#1476772231]) with ID 18
16/07/22 04:15:27 INFO TaskSetManager: Starting task 32.0 in stage 0.0 (TID 32, 192.168.110.112, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.52:49742/user/Executor#-1166940964]) with ID 23
16/07/22 04:15:27 INFO TaskSetManager: Starting task 33.0 in stage 0.0 (TID 33, 192.168.100.52, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.45:34257/user/Executor#-2012716050]) with ID 12
16/07/22 04:15:27 INFO TaskSetManager: Starting task 34.0 in stage 0.0 (TID 34, 192.168.100.45, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.230:59385/user/Executor#-248920178]) with ID 140
16/07/22 04:15:27 INFO TaskSetManager: Starting task 35.0 in stage 0.0 (TID 35, 192.168.110.230, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.247:40650/user/Executor#1558762125]) with ID 91
16/07/22 04:15:27 INFO TaskSetManager: Starting task 36.0 in stage 0.0 (TID 36, 192.168.110.247, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.119:58227/user/Executor#-568877596]) with ID 43
16/07/22 04:15:27 INFO TaskSetManager: Starting task 37.0 in stage 0.0 (TID 37, 192.168.110.119, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:27 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.156:52040/user/Executor#-1516641586]) with ID 56
16/07/22 04:15:27 INFO TaskSetManager: Starting task 38.0 in stage 0.0 (TID 38, 192.168.110.156, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.128:44429/user/Executor#-737424313]) with ID 54
16/07/22 04:15:28 INFO TaskSetManager: Starting task 39.0 in stage 0.0 (TID 39, 192.168.110.128, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.174:43601/user/Executor#1628028758]) with ID 150
16/07/22 04:15:28 INFO TaskSetManager: Starting task 40.0 in stage 0.0 (TID 40, 192.168.110.174, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.157:34491/user/Executor#999375375]) with ID 117
16/07/22 04:15:28 INFO TaskSetManager: Starting task 41.0 in stage 0.0 (TID 41, 192.168.110.157, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.220:47718/user/Executor#1448148767]) with ID 101
16/07/22 04:15:28 INFO TaskSetManager: Starting task 42.0 in stage 0.0 (TID 42, 192.168.110.220, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.189:45058 with 265.4 MB RAM, BlockManagerId(45, 192.168.100.189, 45058)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.165:48754/user/Executor#323820054]) with ID 94
16/07/22 04:15:28 INFO TaskSetManager: Starting task 43.0 in stage 0.0 (TID 43, 192.168.110.165, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.244:48532 with 265.4 MB RAM, BlockManagerId(62, 192.168.100.244, 48532)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.210:41364 with 265.4 MB RAM, BlockManagerId(40, 192.168.100.210, 41364)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.251:48865 with 265.4 MB RAM, BlockManagerId(48, 192.168.110.251, 48865)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.241:45778 with 265.4 MB RAM, BlockManagerId(53, 192.168.110.241, 45778)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.253:39465 with 265.4 MB RAM, BlockManagerId(13, 192.168.100.253, 39465)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.53:50008/user/Executor#1608942675]) with ID 116
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.232:38568 with 265.4 MB RAM, BlockManagerId(52, 192.168.110.232, 38568)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 44.0 in stage 0.0 (TID 44, 192.168.100.53, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.190:51560 with 265.4 MB RAM, BlockManagerId(47, 192.168.100.190, 51560)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.46:36460 with 265.4 MB RAM, BlockManagerId(3, 192.168.100.46, 36460)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.44:55252 with 265.4 MB RAM, BlockManagerId(1, 192.168.100.44, 55252)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.225:56755/user/Executor#-2096928028]) with ID 77
16/07/22 04:15:28 INFO TaskSetManager: Starting task 45.0 in stage 0.0 (TID 45, 192.168.110.225, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.228:35185/user/Executor#1997219025]) with ID 4
16/07/22 04:15:28 INFO TaskSetManager: Starting task 46.0 in stage 0.0 (TID 46, 192.168.110.228, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.247:47775/user/Executor#-92453956]) with ID 51
16/07/22 04:15:28 INFO TaskSetManager: Starting task 47.0 in stage 0.0 (TID 47, 192.168.100.247, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.151:54746/user/Executor#1800336744]) with ID 32
16/07/22 04:15:28 INFO TaskSetManager: Starting task 48.0 in stage 0.0 (TID 48, 192.168.110.151, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.26:35425/user/Executor#-1414832549]) with ID 69
16/07/22 04:15:28 INFO TaskSetManager: Starting task 49.0 in stage 0.0 (TID 49, 192.168.100.26, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.160:37495/user/Executor#2084305007]) with ID 72
16/07/22 04:15:28 INFO TaskSetManager: Starting task 50.0 in stage 0.0 (TID 50, 192.168.110.160, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.224:40284/user/Executor#-1349306243]) with ID 35
16/07/22 04:15:28 INFO TaskSetManager: Starting task 51.0 in stage 0.0 (TID 51, 192.168.100.224, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.190:42878 with 265.4 MB RAM, BlockManagerId(147, 192.168.110.190, 42878)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.223:38361 with 265.4 MB RAM, BlockManagerId(82, 192.168.110.223, 38361)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.245:35332 with 265.4 MB RAM, BlockManagerId(11, 192.168.110.245, 35332)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.43:51472 with 265.4 MB RAM, BlockManagerId(16, 192.168.100.43, 51472)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.184:45197 with 265.4 MB RAM, BlockManagerId(2, 192.168.100.184, 45197)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.255:47046/user/Executor#-1238818107]) with ID 31
16/07/22 04:15:28 INFO TaskSetManager: Starting task 52.0 in stage 0.0 (TID 52, 192.168.110.255, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.226:60857/user/Executor#140867673]) with ID 143
16/07/22 04:15:28 INFO TaskSetManager: Starting task 53.0 in stage 0.0 (TID 53, 192.168.110.226, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.164:37528/user/Executor#-49373273]) with ID 59
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.167:35575 with 265.4 MB RAM, BlockManagerId(27, 192.168.110.167, 35575)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 54.0 in stage 0.0 (TID 54, 192.168.110.164, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.206:34807/user/Executor#1575617232]) with ID 93
16/07/22 04:15:28 INFO TaskSetManager: Starting task 55.0 in stage 0.0 (TID 55, 192.168.100.206, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.171:57856 with 265.4 MB RAM, BlockManagerId(17, 192.168.110.171, 57856)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.58:48381/user/Executor#-71695469]) with ID 99
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.191:33298 with 265.4 MB RAM, BlockManagerId(21, 192.168.100.191, 33298)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.254:49116 with 265.4 MB RAM, BlockManagerId(25, 192.168.110.254, 49116)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.218:33152 with 265.4 MB RAM, BlockManagerId(34, 192.168.110.218, 33152)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 56.0 in stage 0.0 (TID 56, 192.168.100.58, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.33:47615 with 265.4 MB RAM, BlockManagerId(71, 192.168.100.33, 47615)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.240:39900 with 265.4 MB RAM, BlockManagerId(67, 192.168.110.240, 39900)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.201:42356 with 265.4 MB RAM, BlockManagerId(15, 192.168.110.201, 42356)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.236:45104 with 265.4 MB RAM, BlockManagerId(41, 192.168.110.236, 45104)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.123:43184/user/Executor#-1499726795]) with ID 64
16/07/22 04:15:28 INFO TaskSetManager: Starting task 57.0 in stage 0.0 (TID 57, 192.168.110.123, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.225:40994/user/Executor#-1435818525]) with ID 115
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.221:52967 with 265.4 MB RAM, BlockManagerId(61, 192.168.100.221, 52967)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 58.0 in stage 0.0 (TID 58, 192.168.100.225, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.187:52422 with 265.4 MB RAM, BlockManagerId(209, 192.168.100.187, 52422)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.228:52044/user/Executor#550084630]) with ID 132
16/07/22 04:15:28 INFO TaskSetManager: Starting task 59.0 in stage 0.0 (TID 59, 192.168.100.228, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.166:57452/user/Executor#-1566064390]) with ID 49
16/07/22 04:15:28 INFO TaskSetManager: Starting task 60.0 in stage 0.0 (TID 60, 192.168.110.166, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.47:42400/user/Executor#2072866629]) with ID 201
16/07/22 04:15:28 INFO TaskSetManager: Starting task 61.0 in stage 0.0 (TID 61, 192.168.100.47, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.113:53273/user/Executor#-1468745393]) with ID 36
16/07/22 04:15:28 INFO TaskSetManager: Starting task 62.0 in stage 0.0 (TID 62, 192.168.110.113, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.246:36004/user/Executor#-927191324]) with ID 185
16/07/22 04:15:28 INFO TaskSetManager: Starting task 63.0 in stage 0.0 (TID 63, 192.168.100.246, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.221:58968/user/Executor#-1520246246]) with ID 131
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.132:38260 with 265.4 MB RAM, BlockManagerId(9, 192.168.110.132, 38260)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 64.0 in stage 0.0 (TID 64, 192.168.110.221, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.177:51718/user/Executor#-541060447]) with ID 136
16/07/22 04:15:28 INFO TaskSetManager: Starting task 65.0 in stage 0.0 (TID 65, 192.168.110.177, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.234:36323/user/Executor#-2091500117]) with ID 112
16/07/22 04:15:28 INFO TaskSetManager: Starting task 66.0 in stage 0.0 (TID 66, 192.168.100.234, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.208:48802 with 265.4 MB RAM, BlockManagerId(37, 192.168.110.208, 48802)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.32:60531/user/Executor#-1644290971]) with ID 181
16/07/22 04:15:28 INFO TaskSetManager: Starting task 67.0 in stage 0.0 (TID 67, 192.168.100.32, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.235:60577 with 265.4 MB RAM, BlockManagerId(38, 192.168.110.235, 60577)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.35:50090/user/Executor#-1927324227]) with ID 152
16/07/22 04:15:28 INFO TaskSetManager: Starting task 68.0 in stage 0.0 (TID 68, 192.168.100.35, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.64:35516/user/Executor#-1292173598]) with ID 173
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.212:39302 with 265.4 MB RAM, BlockManagerId(88, 192.168.110.212, 39302)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 69.0 in stage 0.0 (TID 69, 192.168.100.64, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.52:49653 with 265.4 MB RAM, BlockManagerId(23, 192.168.100.52, 49653)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.209:38394/user/Executor#-869002633]) with ID 104
16/07/22 04:15:28 INFO TaskSetManager: Starting task 70.0 in stage 0.0 (TID 70, 192.168.110.209, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.180:37227/user/Executor#-188946453]) with ID 98
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.45:53534 with 265.4 MB RAM, BlockManagerId(12, 192.168.100.45, 53534)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.112:57681 with 265.4 MB RAM, BlockManagerId(18, 192.168.110.112, 57681)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.230:50205 with 265.4 MB RAM, BlockManagerId(140, 192.168.110.230, 50205)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 71.0 in stage 0.0 (TID 71, 192.168.100.180, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.115:47755/user/Executor#-1929305093]) with ID 128
16/07/22 04:15:28 INFO TaskSetManager: Starting task 72.0 in stage 0.0 (TID 72, 192.168.110.115, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.134:58921/user/Executor#-1810495821]) with ID 109
16/07/22 04:15:28 INFO TaskSetManager: Starting task 73.0 in stage 0.0 (TID 73, 192.168.110.134, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.254:54610/user/Executor#158783165]) with ID 187
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.247:39802 with 265.4 MB RAM, BlockManagerId(91, 192.168.110.247, 39802)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 74.0 in stage 0.0 (TID 74, 192.168.100.254, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.156:34681 with 265.4 MB RAM, BlockManagerId(56, 192.168.110.156, 34681)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.233:46563/user/Executor#-2103807593]) with ID 50
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.119:47472 with 265.4 MB RAM, BlockManagerId(43, 192.168.110.119, 47472)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.128:58632 with 265.4 MB RAM, BlockManagerId(54, 192.168.110.128, 58632)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.181:53454 with 265.4 MB RAM, BlockManagerId(29, 192.168.110.181, 53454)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.174:39008 with 265.4 MB RAM, BlockManagerId(150, 192.168.110.174, 39008)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 75.0 in stage 0.0 (TID 75, 192.168.100.233, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.240:49676/user/Executor#138752290]) with ID 139
16/07/22 04:15:28 INFO TaskSetManager: Starting task 76.0 in stage 0.0 (TID 76, 192.168.100.240, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.27:48232/user/Executor#-1654129784]) with ID 6
16/07/22 04:15:28 INFO TaskSetManager: Starting task 77.0 in stage 0.0 (TID 77, 192.168.100.27, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.218:53438/user/Executor#-2032360817]) with ID 189
16/07/22 04:15:28 INFO TaskSetManager: Starting task 78.0 in stage 0.0 (TID 78, 192.168.100.218, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.50:46080/user/Executor#988760134]) with ID 198
16/07/22 04:15:28 INFO TaskSetManager: Starting task 79.0 in stage 0.0 (TID 79, 192.168.100.50, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.199:45703/user/Executor#1492704019]) with ID 159
16/07/22 04:15:28 INFO TaskSetManager: Starting task 80.0 in stage 0.0 (TID 80, 192.168.110.199, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.173:57887/user/Executor#505958807]) with ID 166
16/07/22 04:15:28 INFO TaskSetManager: Starting task 81.0 in stage 0.0 (TID 81, 192.168.110.173, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.163:38924/user/Executor#733980673]) with ID 177
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.220:58733 with 265.4 MB RAM, BlockManagerId(101, 192.168.110.220, 58733)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 82.0 in stage 0.0 (TID 82, 192.168.110.163, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.157:44362 with 265.4 MB RAM, BlockManagerId(117, 192.168.110.157, 44362)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.244:43493/user/Executor#1519095733]) with ID 100
16/07/22 04:15:28 INFO TaskSetManager: Starting task 83.0 in stage 0.0 (TID 83, 192.168.110.244, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.60:59062/user/Executor#1029628872]) with ID 202
16/07/22 04:15:28 INFO TaskSetManager: Starting task 84.0 in stage 0.0 (TID 84, 192.168.100.60, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.114:43465/user/Executor#1622844641]) with ID 68
16/07/22 04:15:28 INFO TaskSetManager: Starting task 85.0 in stage 0.0 (TID 85, 192.168.110.114, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.202:56287/user/Executor#-1010407330]) with ID 78
16/07/22 04:15:28 INFO TaskSetManager: Starting task 86.0 in stage 0.0 (TID 86, 192.168.110.202, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.182:37563/user/Executor#1346229426]) with ID 165
16/07/22 04:15:28 INFO TaskSetManager: Starting task 87.0 in stage 0.0 (TID 87, 192.168.110.182, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.28:41811/user/Executor#-406380686]) with ID 211
16/07/22 04:15:28 INFO TaskSetManager: Starting task 88.0 in stage 0.0 (TID 88, 192.168.100.28, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.55:57529/user/Executor#-852145782]) with ID 145
16/07/22 04:15:28 INFO TaskSetManager: Starting task 89.0 in stage 0.0 (TID 89, 192.168.100.55, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.243:33344/user/Executor#-991504166]) with ID 89
16/07/22 04:15:28 INFO TaskSetManager: Starting task 90.0 in stage 0.0 (TID 90, 192.168.100.243, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.180:52031/user/Executor#2055864354]) with ID 118
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.165:49505 with 265.4 MB RAM, BlockManagerId(94, 192.168.110.165, 49505)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 91.0 in stage 0.0 (TID 91, 192.168.110.180, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.253:32990/user/Executor#-366360242]) with ID 146
16/07/22 04:15:28 INFO TaskSetManager: Starting task 92.0 in stage 0.0 (TID 92, 192.168.110.253, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.41:35474/user/Executor#-1197077778]) with ID 218
16/07/22 04:15:28 INFO TaskSetManager: Starting task 93.0 in stage 0.0 (TID 93, 192.168.100.41, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.53:49338 with 265.4 MB RAM, BlockManagerId(116, 192.168.100.53, 49338)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.42:58223/user/Executor#2112382902]) with ID 44
16/07/22 04:15:28 INFO TaskSetManager: Starting task 94.0 in stage 0.0 (TID 94, 192.168.100.42, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.185:48119/user/Executor#1521975874]) with ID 96
16/07/22 04:15:28 INFO TaskSetManager: Starting task 95.0 in stage 0.0 (TID 95, 192.168.110.185, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.31:50080/user/Executor#-978887568]) with ID 227
16/07/22 04:15:28 INFO TaskSetManager: Starting task 96.0 in stage 0.0 (TID 96, 192.168.100.31, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.207:42633/user/Executor#2048827853]) with ID 84
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.225:33073 with 265.4 MB RAM, BlockManagerId(77, 192.168.110.225, 33073)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 97.0 in stage 0.0 (TID 97, 192.168.110.207, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.247:43866 with 265.4 MB RAM, BlockManagerId(51, 192.168.100.247, 43866)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.22:51605/user/Executor#416376439]) with ID 63
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.160:38702 with 265.4 MB RAM, BlockManagerId(72, 192.168.110.160, 38702)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.151:60059 with 265.4 MB RAM, BlockManagerId(32, 192.168.110.151, 60059)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.26:51359 with 265.4 MB RAM, BlockManagerId(69, 192.168.100.26, 51359)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 98.0 in stage 0.0 (TID 98, 192.168.100.22, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.235:34910/user/Executor#-1912066120]) with ID 235
16/07/22 04:15:28 INFO TaskSetManager: Starting task 99.0 in stage 0.0 (TID 99, 192.168.100.235, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.182:46070/user/Executor#1554650735]) with ID 225
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.228:33206 with 265.4 MB RAM, BlockManagerId(4, 192.168.110.228, 33206)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 100.0 in stage 0.0 (TID 100, 192.168.100.182, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.162:42766/user/Executor#257419428]) with ID 5
16/07/22 04:15:28 INFO TaskSetManager: Starting task 101.0 in stage 0.0 (TID 101, 192.168.110.162, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.193:53423/user/Executor#934443670]) with ID 215
16/07/22 04:15:28 INFO TaskSetManager: Starting task 102.0 in stage 0.0 (TID 102, 192.168.100.193, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.111.0:38502/user/Executor#-348268174]) with ID 208
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.224:56335 with 265.4 MB RAM, BlockManagerId(35, 192.168.100.224, 56335)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 103.0 in stage 0.0 (TID 103, 192.168.111.0, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.246:38384/user/Executor#549743249]) with ID 161
16/07/22 04:15:28 INFO TaskSetManager: Starting task 104.0 in stage 0.0 (TID 104, 192.168.110.246, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.37:49947/user/Executor#-1032811570]) with ID 167
16/07/22 04:15:28 INFO TaskSetManager: Starting task 105.0 in stage 0.0 (TID 105, 192.168.100.37, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.249:52515/user/Executor#1867836959]) with ID 213
16/07/22 04:15:28 INFO TaskSetManager: Starting task 106.0 in stage 0.0 (TID 106, 192.168.100.249, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.237:36274/user/Executor#-1863762223]) with ID 169
16/07/22 04:15:28 INFO TaskSetManager: Starting task 107.0 in stage 0.0 (TID 107, 192.168.110.237, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.211:49469/user/Executor#632165623]) with ID 141
16/07/22 04:15:28 INFO TaskSetManager: Starting task 108.0 in stage 0.0 (TID 108, 192.168.100.211, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.230:47686/user/Executor#1885825514]) with ID 206
16/07/22 04:15:28 INFO TaskSetManager: Starting task 109.0 in stage 0.0 (TID 109, 192.168.100.230, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.195:55726/user/Executor#1870978538]) with ID 46
16/07/22 04:15:28 INFO TaskSetManager: Starting task 110.0 in stage 0.0 (TID 110, 192.168.100.195, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.242:47811/user/Executor#591962923]) with ID 130
16/07/22 04:15:28 INFO TaskSetManager: Starting task 111.0 in stage 0.0 (TID 111, 192.168.100.242, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.38:56118/user/Executor#-290721220]) with ID 224
16/07/22 04:15:28 INFO TaskSetManager: Starting task 112.0 in stage 0.0 (TID 112, 192.168.100.38, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.220:58521/user/Executor#-124292531]) with ID 236
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.226:54310 with 265.4 MB RAM, BlockManagerId(143, 192.168.110.226, 54310)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 113.0 in stage 0.0 (TID 113, 192.168.100.220, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.158:52492/user/Executor#-1940914915]) with ID 126
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.206:43121 with 265.4 MB RAM, BlockManagerId(93, 192.168.100.206, 43121)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.255:55947 with 265.4 MB RAM, BlockManagerId(31, 192.168.110.255, 55947)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 114.0 in stage 0.0 (TID 114, 192.168.110.158, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.116:59653/user/Executor#417444903]) with ID 28
16/07/22 04:15:28 INFO TaskSetManager: Starting task 115.0 in stage 0.0 (TID 115, 192.168.110.116, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.164:40808 with 265.4 MB RAM, BlockManagerId(59, 192.168.110.164, 40808)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.179:46043/user/Executor#1019415454]) with ID 92
16/07/22 04:15:28 INFO TaskSetManager: Starting task 116.0 in stage 0.0 (TID 116, 192.168.100.179, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.126:46548/user/Executor#131888960]) with ID 119
16/07/22 04:15:28 INFO TaskSetManager: Starting task 117.0 in stage 0.0 (TID 117, 192.168.110.126, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.204:49575/user/Executor#1974975214]) with ID 86
16/07/22 04:15:28 INFO TaskSetManager: Starting task 118.0 in stage 0.0 (TID 118, 192.168.100.204, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.58:48376 with 265.4 MB RAM, BlockManagerId(99, 192.168.100.58, 48376)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.233:38558/user/Executor#209847024]) with ID 228
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.225:54424 with 265.4 MB RAM, BlockManagerId(115, 192.168.100.225, 54424)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.166:33856 with 265.4 MB RAM, BlockManagerId(49, 192.168.110.166, 33856)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.47:60932 with 265.4 MB RAM, BlockManagerId(201, 192.168.100.47, 60932)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.123:34252 with 265.4 MB RAM, BlockManagerId(64, 192.168.110.123, 34252)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.228:49946 with 265.4 MB RAM, BlockManagerId(132, 192.168.100.228, 49946)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 119.0 in stage 0.0 (TID 119, 192.168.110.233, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.234:42804 with 265.4 MB RAM, BlockManagerId(112, 192.168.100.234, 42804)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.29:46715/user/Executor#-726224777]) with ID 232
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.177:41472 with 265.4 MB RAM, BlockManagerId(136, 192.168.110.177, 41472)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 120.0 in stage 0.0 (TID 120, 192.168.100.29, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.246:40971 with 265.4 MB RAM, BlockManagerId(185, 192.168.100.246, 40971)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.144:52168/user/Executor#-1965309368]) with ID 55
16/07/22 04:15:28 INFO TaskSetManager: Starting task 121.0 in stage 0.0 (TID 121, 192.168.110.144, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.21:36835/user/Executor#1376139429]) with ID 113
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.35:48804 with 265.4 MB RAM, BlockManagerId(152, 192.168.100.35, 48804)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.32:60517 with 265.4 MB RAM, BlockManagerId(181, 192.168.100.32, 60517)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 122.0 in stage 0.0 (TID 122, 192.168.100.21, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.64:53091 with 265.4 MB RAM, BlockManagerId(173, 192.168.100.64, 53091)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.113:52113 with 265.4 MB RAM, BlockManagerId(36, 192.168.110.113, 52113)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.180:51875 with 265.4 MB RAM, BlockManagerId(98, 192.168.100.180, 51875)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.194:37359/user/Executor#278153000]) with ID 229
16/07/22 04:15:28 INFO TaskSetManager: Starting task 123.0 in stage 0.0 (TID 123, 192.168.110.194, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.136:37002/user/Executor#-919916425]) with ID 111
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.233:58874 with 265.4 MB RAM, BlockManagerId(50, 192.168.100.233, 58874)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 124.0 in stage 0.0 (TID 124, 192.168.110.136, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.229:44515/user/Executor#621612921]) with ID 203
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.209:44439 with 265.4 MB RAM, BlockManagerId(104, 192.168.110.209, 44439)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 125.0 in stage 0.0 (TID 125, 192.168.100.229, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.218:34461 with 265.4 MB RAM, BlockManagerId(189, 192.168.100.218, 34461)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.153:35069/user/Executor#885246733]) with ID 73
16/07/22 04:15:28 INFO TaskSetManager: Starting task 126.0 in stage 0.0 (TID 126, 192.168.110.153, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.61:37785/user/Executor#163485107]) with ID 135
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.221:56014 with 265.4 MB RAM, BlockManagerId(131, 192.168.110.221, 56014)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 127.0 in stage 0.0 (TID 127, 192.168.100.61, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.148:43081/user/Executor#1923585088]) with ID 102
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.134:43084 with 265.4 MB RAM, BlockManagerId(109, 192.168.110.134, 43084)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 128.0 in stage 0.0 (TID 128, 192.168.110.148, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.238:35389/user/Executor#732327944]) with ID 175
16/07/22 04:15:28 INFO TaskSetManager: Starting task 129.0 in stage 0.0 (TID 129, 192.168.110.238, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.240:56064 with 265.4 MB RAM, BlockManagerId(139, 192.168.100.240, 56064)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.50:55873 with 265.4 MB RAM, BlockManagerId(198, 192.168.100.50, 55873)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.248:40841/user/Executor#659497202]) with ID 60
16/07/22 04:15:28 INFO TaskSetManager: Starting task 130.0 in stage 0.0 (TID 130, 192.168.100.248, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.115:45103 with 265.4 MB RAM, BlockManagerId(128, 192.168.110.115, 45103)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.254:46348 with 265.4 MB RAM, BlockManagerId(187, 192.168.100.254, 46348)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.172:42748/user/Executor#-1922081027]) with ID 176
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.199:47651 with 265.4 MB RAM, BlockManagerId(159, 192.168.110.199, 47651)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.244:40927 with 265.4 MB RAM, BlockManagerId(100, 192.168.110.244, 40927)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.28:44560 with 265.4 MB RAM, BlockManagerId(211, 192.168.100.28, 44560)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.163:44477 with 265.4 MB RAM, BlockManagerId(177, 192.168.110.163, 44477)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.60:54027 with 265.4 MB RAM, BlockManagerId(202, 192.168.100.60, 54027)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.202:43507 with 265.4 MB RAM, BlockManagerId(78, 192.168.110.202, 43507)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.55:52933 with 265.4 MB RAM, BlockManagerId(145, 192.168.100.55, 52933)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.114:57155 with 265.4 MB RAM, BlockManagerId(68, 192.168.110.114, 57155)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.253:49359 with 265.4 MB RAM, BlockManagerId(146, 192.168.110.253, 49359)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 131.0 in stage 0.0 (TID 131, 192.168.110.172, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.217:38658/user/Executor#791594008]) with ID 214
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.27:45962 with 265.4 MB RAM, BlockManagerId(6, 192.168.100.27, 45962)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 132.0 in stage 0.0 (TID 132, 192.168.110.217, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.205:34892/user/Executor#-1678758138]) with ID 210
16/07/22 04:15:28 INFO TaskSetManager: Starting task 133.0 in stage 0.0 (TID 133, 192.168.110.205, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.125:41906/user/Executor#932423569]) with ID 142
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.185:45549 with 265.4 MB RAM, BlockManagerId(96, 192.168.110.185, 45549)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.230:59054 with 265.4 MB RAM, BlockManagerId(206, 192.168.100.230, 59054)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.37:49992 with 265.4 MB RAM, BlockManagerId(167, 192.168.100.37, 49992)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.243:44742 with 265.4 MB RAM, BlockManagerId(89, 192.168.100.243, 44742)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.249:55008 with 265.4 MB RAM, BlockManagerId(213, 192.168.100.249, 55008)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.193:53685 with 265.4 MB RAM, BlockManagerId(215, 192.168.100.193, 53685)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.195:53070 with 265.4 MB RAM, BlockManagerId(46, 192.168.100.195, 53070)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 134.0 in stage 0.0 (TID 134, 192.168.110.125, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.159:59674/user/Executor#-1578774429]) with ID 233
16/07/22 04:15:28 INFO TaskSetManager: Starting task 135.0 in stage 0.0 (TID 135, 192.168.110.159, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.193:59346/user/Executor#1333181309]) with ID 149
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.180:56466 with 265.4 MB RAM, BlockManagerId(118, 192.168.110.180, 56466)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.162:36994 with 265.4 MB RAM, BlockManagerId(5, 192.168.110.162, 36994)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.235:52071 with 265.4 MB RAM, BlockManagerId(235, 192.168.100.235, 52071)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.42:46659 with 265.4 MB RAM, BlockManagerId(44, 192.168.100.42, 46659)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.41:49603 with 265.4 MB RAM, BlockManagerId(218, 192.168.100.41, 49603)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 136.0 in stage 0.0 (TID 136, 192.168.110.193, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.222:51561/user/Executor#-342831240]) with ID 238
16/07/22 04:15:28 INFO TaskSetManager: Starting task 137.0 in stage 0.0 (TID 137, 192.168.110.222, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.198:33532/user/Executor#1149625441]) with ID 148
16/07/22 04:15:28 INFO TaskSetManager: Starting task 138.0 in stage 0.0 (TID 138, 192.168.110.198, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.129:59315/user/Executor#123423466]) with ID 172
16/07/22 04:15:28 INFO TaskSetManager: Starting task 139.0 in stage 0.0 (TID 139, 192.168.110.129, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.63:37515/user/Executor#216688378]) with ID 212
16/07/22 04:15:28 INFO TaskSetManager: Starting task 140.0 in stage 0.0 (TID 140, 192.168.100.63, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.183:48765/user/Executor#1771723441]) with ID 171
16/07/22 04:15:28 INFO TaskSetManager: Starting task 141.0 in stage 0.0 (TID 141, 192.168.110.183, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.252:48629/user/Executor#-979045227]) with ID 154
16/07/22 04:15:28 INFO TaskSetManager: Starting task 142.0 in stage 0.0 (TID 142, 192.168.110.252, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.212:34881/user/Executor#-1422973975]) with ID 205
16/07/22 04:15:28 INFO TaskSetManager: Starting task 143.0 in stage 0.0 (TID 143, 192.168.100.212, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.181:38881/user/Executor#872793901]) with ID 230
16/07/22 04:15:28 INFO TaskSetManager: Starting task 144.0 in stage 0.0 (TID 144, 192.168.100.181, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.211:33426 with 265.4 MB RAM, BlockManagerId(141, 192.168.100.211, 33426)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.211:59055/user/Executor#601161606]) with ID 180
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.220:58859 with 265.4 MB RAM, BlockManagerId(236, 192.168.100.220, 58859)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 145.0 in stage 0.0 (TID 145, 192.168.110.211, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.161:34938/user/Executor#-400154362]) with ID 163
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.158:42687 with 265.4 MB RAM, BlockManagerId(126, 192.168.110.158, 42687)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.242:46250 with 265.4 MB RAM, BlockManagerId(130, 192.168.100.242, 46250)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.246:57758 with 265.4 MB RAM, BlockManagerId(161, 192.168.110.246, 57758)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.182:53245 with 265.4 MB RAM, BlockManagerId(165, 192.168.110.182, 53245)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.204:52018 with 265.4 MB RAM, BlockManagerId(86, 192.168.100.204, 52018)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 146.0 in stage 0.0 (TID 146, 192.168.110.161, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.237:49825 with 265.4 MB RAM, BlockManagerId(169, 192.168.110.237, 49825)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.188:44946/user/Executor#-1062003476]) with ID 90
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.182:40890 with 265.4 MB RAM, BlockManagerId(225, 192.168.100.182, 40890)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.179:37828 with 265.4 MB RAM, BlockManagerId(92, 192.168.100.179, 37828)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.38:36493 with 265.4 MB RAM, BlockManagerId(224, 192.168.100.38, 36493)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.173:46030 with 265.4 MB RAM, BlockManagerId(166, 192.168.110.173, 46030)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.31:34245 with 265.4 MB RAM, BlockManagerId(227, 192.168.100.31, 34245)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 147.0 in stage 0.0 (TID 147, 192.168.100.188, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.111.0:39247 with 265.4 MB RAM, BlockManagerId(208, 192.168.111.0, 39247)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.22:40729 with 265.4 MB RAM, BlockManagerId(63, 192.168.100.22, 40729)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.207:33074 with 265.4 MB RAM, BlockManagerId(84, 192.168.110.207, 33074)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.126:45964 with 265.4 MB RAM, BlockManagerId(119, 192.168.110.126, 45964)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.116:52050 with 265.4 MB RAM, BlockManagerId(28, 192.168.110.116, 52050)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.224:37389/user/Executor#1364488988]) with ID 222
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.233:37073 with 265.4 MB RAM, BlockManagerId(228, 192.168.110.233, 37073)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.21:34156 with 265.4 MB RAM, BlockManagerId(113, 192.168.100.21, 34156)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.144:51982 with 265.4 MB RAM, BlockManagerId(55, 192.168.110.144, 51982)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 148.0 in stage 0.0 (TID 148, 192.168.110.224, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.170:49611/user/Executor#-1478443089]) with ID 174
16/07/22 04:15:28 INFO TaskSetManager: Starting task 149.0 in stage 0.0 (TID 149, 192.168.110.170, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.29:54149 with 265.4 MB RAM, BlockManagerId(232, 192.168.100.29, 54149)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.229:41226 with 265.4 MB RAM, BlockManagerId(203, 192.168.100.229, 41226)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.136:51083 with 265.4 MB RAM, BlockManagerId(111, 192.168.110.136, 51083)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.153:36242 with 265.4 MB RAM, BlockManagerId(73, 192.168.110.153, 36242)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.248:50138 with 265.4 MB RAM, BlockManagerId(60, 192.168.100.248, 50138)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.245:41664/user/Executor#106044083]) with ID 155
16/07/22 04:15:28 INFO TaskSetManager: Starting task 150.0 in stage 0.0 (TID 150, 192.168.100.245, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.148:51597 with 265.4 MB RAM, BlockManagerId(102, 192.168.110.148, 51597)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.231:46520/user/Executor#1546478533]) with ID 217
16/07/22 04:15:28 INFO TaskSetManager: Starting task 151.0 in stage 0.0 (TID 151, 192.168.100.231, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.178:44326/user/Executor#1221562723]) with ID 120
16/07/22 04:15:28 INFO TaskSetManager: Starting task 152.0 in stage 0.0 (TID 152, 192.168.110.178, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.30:52316/user/Executor#-1608968786]) with ID 103
16/07/22 04:15:28 INFO TaskSetManager: Starting task 153.0 in stage 0.0 (TID 153, 192.168.100.30, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.127:59087/user/Executor#-1724580703]) with ID 192
16/07/22 04:15:28 INFO TaskSetManager: Starting task 154.0 in stage 0.0 (TID 154, 192.168.110.127, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.24:57793/user/Executor#-1539379083]) with ID 164
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.205:34025 with 265.4 MB RAM, BlockManagerId(210, 192.168.110.205, 34025)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.238:50537 with 265.4 MB RAM, BlockManagerId(175, 192.168.110.238, 50537)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 155.0 in stage 0.0 (TID 155, 192.168.100.24, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.186:39455/user/Executor#-1292174883]) with ID 138
16/07/22 04:15:28 INFO TaskSetManager: Starting task 156.0 in stage 0.0 (TID 156, 192.168.110.186, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.188:56250/user/Executor#1520830295]) with ID 14
16/07/22 04:15:28 INFO TaskSetManager: Starting task 157.0 in stage 0.0 (TID 157, 192.168.110.188, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.149:43759/user/Executor#1074515797]) with ID 199
16/07/22 04:15:28 INFO TaskSetManager: Starting task 158.0 in stage 0.0 (TID 158, 192.168.110.149, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.169:45517/user/Executor#1920217044]) with ID 10
16/07/22 04:15:28 INFO TaskSetManager: Starting task 159.0 in stage 0.0 (TID 159, 192.168.110.169, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.138:60425/user/Executor#-1779994820]) with ID 42
16/07/22 04:15:28 INFO TaskSetManager: Starting task 160.0 in stage 0.0 (TID 160, 192.168.110.138, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.155:46535/user/Executor#390992897]) with ID 105
16/07/22 04:15:28 INFO TaskSetManager: Starting task 161.0 in stage 0.0 (TID 161, 192.168.110.155, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.140:50702/user/Executor#-1562914826]) with ID 162
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.129:42662 with 265.4 MB RAM, BlockManagerId(172, 192.168.110.129, 42662)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.125:39778 with 265.4 MB RAM, BlockManagerId(142, 192.168.110.125, 39778)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.198:60921 with 265.4 MB RAM, BlockManagerId(148, 192.168.110.198, 60921)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.61:49537 with 265.4 MB RAM, BlockManagerId(135, 192.168.100.61, 49537)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.194:46843 with 265.4 MB RAM, BlockManagerId(229, 192.168.110.194, 46843)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.217:54604 with 265.4 MB RAM, BlockManagerId(214, 192.168.110.217, 54604)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.159:40632 with 265.4 MB RAM, BlockManagerId(233, 192.168.110.159, 40632)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.252:39094 with 265.4 MB RAM, BlockManagerId(154, 192.168.110.252, 39094)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.193:48993 with 265.4 MB RAM, BlockManagerId(149, 192.168.110.193, 48993)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.212:56391 with 265.4 MB RAM, BlockManagerId(205, 192.168.100.212, 56391)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.172:47752 with 265.4 MB RAM, BlockManagerId(176, 192.168.110.172, 47752)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.183:35173 with 265.4 MB RAM, BlockManagerId(171, 192.168.110.183, 35173)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.222:44371 with 265.4 MB RAM, BlockManagerId(238, 192.168.110.222, 44371)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.181:50728 with 265.4 MB RAM, BlockManagerId(230, 192.168.100.181, 50728)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.161:51376 with 265.4 MB RAM, BlockManagerId(163, 192.168.110.161, 51376)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 162.0 in stage 0.0 (TID 162, 192.168.110.140, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.143:37901/user/Executor#1362273776]) with ID 184
16/07/22 04:15:28 INFO TaskSetManager: Starting task 163.0 in stage 0.0 (TID 163, 192.168.110.143, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.250:56880/user/Executor#-2018160917]) with ID 197
16/07/22 04:15:28 INFO TaskSetManager: Starting task 164.0 in stage 0.0 (TID 164, 192.168.110.250, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.122:51285/user/Executor#1499276063]) with ID 79
16/07/22 04:15:28 INFO TaskSetManager: Starting task 165.0 in stage 0.0 (TID 165, 192.168.110.122, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.34:57421/user/Executor#1303734327]) with ID 200
16/07/22 04:15:28 INFO TaskSetManager: Starting task 166.0 in stage 0.0 (TID 166, 192.168.100.34, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.124:59283/user/Executor#-384344703]) with ID 153
16/07/22 04:15:28 INFO TaskSetManager: Starting task 167.0 in stage 0.0 (TID 167, 192.168.110.124, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.204:58557/user/Executor#1934081243]) with ID 178
16/07/22 04:15:28 INFO TaskSetManager: Starting task 168.0 in stage 0.0 (TID 168, 192.168.110.204, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.195:54206/user/Executor#799133233]) with ID 134
16/07/22 04:15:28 INFO TaskSetManager: Starting task 169.0 in stage 0.0 (TID 169, 192.168.110.195, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.238:39000/user/Executor#-675046267]) with ID 186
16/07/22 04:15:28 INFO TaskSetManager: Starting task 170.0 in stage 0.0 (TID 170, 192.168.100.238, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.217:33355/user/Executor#-2130110839]) with ID 66
16/07/22 04:15:28 INFO TaskSetManager: Starting task 171.0 in stage 0.0 (TID 171, 192.168.100.217, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.139:51990/user/Executor#1541152328]) with ID 19
16/07/22 04:15:28 INFO TaskSetManager: Starting task 172.0 in stage 0.0 (TID 172, 192.168.110.139, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.205:37624/user/Executor#-1170236181]) with ID 144
16/07/22 04:15:28 INFO TaskSetManager: Starting task 173.0 in stage 0.0 (TID 173, 192.168.100.205, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.133:48892/user/Executor#861829237]) with ID 195
16/07/22 04:15:28 INFO TaskSetManager: Starting task 174.0 in stage 0.0 (TID 174, 192.168.110.133, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.229:43501/user/Executor#-1727400686]) with ID 179
16/07/22 04:15:28 INFO TaskSetManager: Starting task 175.0 in stage 0.0 (TID 175, 192.168.110.229, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.130:47712/user/Executor#1933375714]) with ID 30
16/07/22 04:15:28 INFO TaskSetManager: Starting task 176.0 in stage 0.0 (TID 176, 192.168.110.130, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.145:42308/user/Executor#1432123918]) with ID 75
16/07/22 04:15:28 INFO TaskSetManager: Starting task 177.0 in stage 0.0 (TID 177, 192.168.110.145, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.147:40198/user/Executor#849751491]) with ID 39
16/07/22 04:15:28 INFO TaskSetManager: Starting task 178.0 in stage 0.0 (TID 178, 192.168.110.147, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.252:52479/user/Executor#-1275883396]) with ID 193
16/07/22 04:15:28 INFO TaskSetManager: Starting task 179.0 in stage 0.0 (TID 179, 192.168.100.252, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.203:34431/user/Executor#2062098232]) with ID 106
16/07/22 04:15:28 INFO TaskSetManager: Starting task 180.0 in stage 0.0 (TID 180, 192.168.110.203, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.121:60706/user/Executor#-884309230]) with ID 158
16/07/22 04:15:28 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.241:45778 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:28 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.223:38361 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 181.0 in stage 0.0 (TID 181, 192.168.110.121, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.44:55252 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.219:34623/user/Executor#1906777090]) with ID 122
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.188:47545 with 265.4 MB RAM, BlockManagerId(90, 192.168.100.188, 47545)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.63:49618 with 265.4 MB RAM, BlockManagerId(212, 192.168.100.63, 49618)
16/07/22 04:15:28 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.218:33152 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 182.0 in stage 0.0 (TID 182, 192.168.100.219, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.211:49616 with 265.4 MB RAM, BlockManagerId(180, 192.168.110.211, 49616)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.219:37236/user/Executor#2031930077]) with ID 108
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.224:35170 with 265.4 MB RAM, BlockManagerId(222, 192.168.110.224, 35170)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 183.0 in stage 0.0 (TID 183, 192.168.110.219, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.237:47372/user/Executor#-238820487]) with ID 123
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.170:44136 with 265.4 MB RAM, BlockManagerId(174, 192.168.110.170, 44136)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.231:45798 with 265.4 MB RAM, BlockManagerId(217, 192.168.100.231, 45798)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.178:50510 with 265.4 MB RAM, BlockManagerId(120, 192.168.110.178, 50510)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.245:37883 with 265.4 MB RAM, BlockManagerId(155, 192.168.100.245, 37883)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 184.0 in stage 0.0 (TID 184, 192.168.100.237, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.197:33940/user/Executor#-1663848583]) with ID 124
16/07/22 04:15:28 INFO TaskSetManager: Starting task 185.0 in stage 0.0 (TID 185, 192.168.110.197, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.248:53328/user/Executor#-1374612295]) with ID 133
16/07/22 04:15:28 INFO TaskSetManager: Starting task 186.0 in stage 0.0 (TID 186, 192.168.110.248, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.241:55160/user/Executor#165803795]) with ID 151
16/07/22 04:15:28 INFO TaskSetManager: Starting task 187.0 in stage 0.0 (TID 187, 192.168.100.241, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.206:55978/user/Executor#803944909]) with ID 204
16/07/22 04:15:28 INFO TaskSetManager: Starting task 188.0 in stage 0.0 (TID 188, 192.168.110.206, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.249:39210/user/Executor#-1645731872]) with ID 114
16/07/22 04:15:28 INFO TaskSetManager: Starting task 189.0 in stage 0.0 (TID 189, 192.168.110.249, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.239:42668/user/Executor#346580200]) with ID 65
16/07/22 04:15:28 INFO TaskSetManager: Starting task 190.0 in stage 0.0 (TID 190, 192.168.100.239, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.65:37797/user/Executor#1802551293]) with ID 188
16/07/22 04:15:28 INFO TaskSetManager: Starting task 191.0 in stage 0.0 (TID 191, 192.168.100.65, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.30:36165 with 265.4 MB RAM, BlockManagerId(103, 192.168.100.30, 36165)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.24:43604 with 265.4 MB RAM, BlockManagerId(164, 192.168.100.24, 43604)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.127:55999 with 265.4 MB RAM, BlockManagerId(192, 192.168.110.127, 55999)
16/07/22 04:15:28 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.167:35575 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:28 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.240:39900 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:28 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.186:47152 with 265.4 MB RAM, BlockManagerId(138, 192.168.110.186, 47152)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.200:33515/user/Executor#1921400881]) with ID 110
16/07/22 04:15:28 INFO TaskSetManager: Starting task 192.0 in stage 0.0 (TID 192, 192.168.110.200, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:28 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.213:45262/user/Executor#995949410]) with ID 85
16/07/22 04:15:28 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.227:60941 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:28 INFO TaskSetManager: Starting task 193.0 in stage 0.0 (TID 193, 192.168.100.213, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.223:42998/user/Executor#-770575103]) with ID 129
16/07/22 04:15:29 INFO TaskSetManager: Starting task 194.0 in stage 0.0 (TID 194, 192.168.100.223, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.168:42012/user/Executor#1349565955]) with ID 231
16/07/22 04:15:29 INFO TaskSetManager: Starting task 195.0 in stage 0.0 (TID 195, 192.168.110.168, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.210:48516/user/Executor#995215475]) with ID 170
16/07/22 04:15:29 INFO TaskSetManager: Starting task 196.0 in stage 0.0 (TID 196, 192.168.110.210, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.227:46603/user/Executor#-779162024]) with ID 219
16/07/22 04:15:29 INFO TaskSetManager: Starting task 197.0 in stage 0.0 (TID 197, 192.168.100.227, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.138:41891 with 265.4 MB RAM, BlockManagerId(42, 192.168.110.138, 41891)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.220:58733 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.140:35662 with 265.4 MB RAM, BlockManagerId(162, 192.168.110.140, 35662)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.250:44345/user/Executor#1696866509]) with ID 22
16/07/22 04:15:29 INFO TaskSetManager: Starting task 198.0 in stage 0.0 (TID 198, 192.168.100.250, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.135:53180/user/Executor#-970060283]) with ID 239
16/07/22 04:15:29 INFO TaskSetManager: Starting task 199.0 in stage 0.0 (TID 199, 192.168.110.135, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.179:41900/user/Executor#86829654]) with ID 157
16/07/22 04:15:29 INFO TaskSetManager: Starting task 200.0 in stage 0.0 (TID 200, 192.168.110.179, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.242:36459/user/Executor#1260701228]) with ID 156
16/07/22 04:15:29 INFO TaskSetManager: Starting task 201.0 in stage 0.0 (TID 201, 192.168.110.242, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.189:48532/user/Executor#1772382390]) with ID 223
16/07/22 04:15:29 INFO TaskSetManager: Starting task 202.0 in stage 0.0 (TID 202, 192.168.110.189, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.146:48133/user/Executor#1046523461]) with ID 95
16/07/22 04:15:29 INFO TaskSetManager: Starting task 203.0 in stage 0.0 (TID 203, 192.168.110.146, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.192:41656/user/Executor#28464235]) with ID 74
16/07/22 04:15:29 INFO TaskSetManager: Starting task 204.0 in stage 0.0 (TID 204, 192.168.110.192, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.183:36029/user/Executor#1727116743]) with ID 70
16/07/22 04:15:29 INFO TaskSetManager: Starting task 205.0 in stage 0.0 (TID 205, 192.168.100.183, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.216:50761/user/Executor#-636906116]) with ID 87
16/07/22 04:15:29 INFO TaskSetManager: Starting task 206.0 in stage 0.0 (TID 206, 192.168.110.216, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.234:60795/user/Executor#1330907848]) with ID 20
16/07/22 04:15:29 INFO TaskSetManager: Starting task 207.0 in stage 0.0 (TID 207, 192.168.110.234, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.196:58589/user/Executor#590705010]) with ID 226
16/07/22 04:15:29 INFO TaskSetManager: Starting task 208.0 in stage 0.0 (TID 208, 192.168.110.196, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.150:33032/user/Executor#432321169]) with ID 207
16/07/22 04:15:29 INFO TaskSetManager: Starting task 209.0 in stage 0.0 (TID 209, 192.168.110.150, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.231:35314/user/Executor#-574988432]) with ID 81
16/07/22 04:15:29 INFO TaskSetManager: Starting task 210.0 in stage 0.0 (TID 210, 192.168.110.231, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.239:38987/user/Executor#-132182148]) with ID 182
16/07/22 04:15:29 INFO TaskSetManager: Starting task 211.0 in stage 0.0 (TID 211, 192.168.110.239, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.154:35966/user/Executor#-1930731606]) with ID 8
16/07/22 04:15:29 INFO TaskSetManager: Starting task 212.0 in stage 0.0 (TID 212, 192.168.110.154, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.215:55812/user/Executor#1010161658]) with ID 97
16/07/22 04:15:29 INFO TaskSetManager: Starting task 213.0 in stage 0.0 (TID 213, 192.168.100.215, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.184:47017/user/Executor#-2035268374]) with ID 127
16/07/22 04:15:29 INFO TaskSetManager: Starting task 214.0 in stage 0.0 (TID 214, 192.168.110.184, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.111:39366/user/Executor#-1280816759]) with ID 121
16/07/22 04:15:29 INFO TaskSetManager: Starting task 215.0 in stage 0.0 (TID 215, 192.168.110.111, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.118:44940/user/Executor#649566026]) with ID 221
16/07/22 04:15:29 INFO TaskSetManager: Starting task 216.0 in stage 0.0 (TID 216, 192.168.110.118, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.226:40782/user/Executor#-1881084506]) with ID 125
16/07/22 04:15:29 INFO TaskSetManager: Starting task 217.0 in stage 0.0 (TID 217, 192.168.100.226, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.39:59487/user/Executor#-251937114]) with ID 220
16/07/22 04:15:29 INFO TaskSetManager: Starting task 218.0 in stage 0.0 (TID 218, 192.168.100.39, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.152:57861/user/Executor#626376160]) with ID 80
16/07/22 04:15:29 INFO TaskSetManager: Starting task 219.0 in stage 0.0 (TID 219, 192.168.110.152, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.186:37768/user/Executor#1540685241]) with ID 237
16/07/22 04:15:29 INFO TaskSetManager: Starting task 220.0 in stage 0.0 (TID 220, 192.168.100.186, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.243:47475/user/Executor#-330068191]) with ID 168
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.188:44175 with 265.4 MB RAM, BlockManagerId(14, 192.168.110.188, 44175)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 221.0 in stage 0.0 (TID 221, 192.168.110.243, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.169:57567 with 265.4 MB RAM, BlockManagerId(10, 192.168.110.169, 57567)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.143:46850 with 265.4 MB RAM, BlockManagerId(184, 192.168.110.143, 46850)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.213:56067/user/Executor#-1233178865]) with ID 240
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.124:36009 with 265.4 MB RAM, BlockManagerId(153, 192.168.110.124, 36009)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.34:40752 with 265.4 MB RAM, BlockManagerId(200, 192.168.100.34, 40752)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.195:60663 with 265.4 MB RAM, BlockManagerId(134, 192.168.110.195, 60663)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 222.0 in stage 0.0 (TID 222, 192.168.110.213, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.149:56957 with 265.4 MB RAM, BlockManagerId(199, 192.168.110.149, 56957)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.176:49507/user/Executor#139613257]) with ID 183
16/07/22 04:15:29 INFO TaskSetManager: Starting task 223.0 in stage 0.0 (TID 223, 192.168.110.176, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.201:42356 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.217:41147 with 265.4 MB RAM, BlockManagerId(66, 192.168.100.217, 41147)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.250:60699 with 265.4 MB RAM, BlockManagerId(197, 192.168.110.250, 60699)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.187:52422 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.204:57065 with 265.4 MB RAM, BlockManagerId(178, 192.168.110.204, 57065)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.251:37319/user/Executor#1354341394]) with ID 196
16/07/22 04:15:29 INFO TaskSetManager: Starting task 224.0 in stage 0.0 (TID 224, 192.168.100.251, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.192:44837/user/Executor#1670312047]) with ID 137
16/07/22 04:15:29 INFO TaskSetManager: Starting task 225.0 in stage 0.0 (TID 225, 192.168.100.192, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.222:45556/user/Executor#241595211]) with ID 33
16/07/22 04:15:29 INFO TaskSetManager: Starting task 226.0 in stage 0.0 (TID 226, 192.168.100.222, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.191:47420/user/Executor#-2054409085]) with ID 26
16/07/22 04:15:29 INFO TaskSetManager: Starting task 227.0 in stage 0.0 (TID 227, 192.168.110.191, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.117:55874/user/Executor#1288398379]) with ID 83
16/07/22 04:15:29 INFO TaskSetManager: Starting task 228.0 in stage 0.0 (TID 228, 192.168.110.117, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.120:57559/user/Executor#1591322150]) with ID 107
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.139:48190 with 265.4 MB RAM, BlockManagerId(19, 192.168.110.139, 48190)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.229:59907 with 265.4 MB RAM, BlockManagerId(179, 192.168.110.229, 59907)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.232:38568 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 229.0 in stage 0.0 (TID 229, 192.168.110.120, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.214:34198/user/Executor#125046684]) with ID 216
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.238:48994 with 265.4 MB RAM, BlockManagerId(186, 192.168.100.238, 48994)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.155:44803 with 265.4 MB RAM, BlockManagerId(105, 192.168.110.155, 44803)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 230.0 in stage 0.0 (TID 230, 192.168.110.214, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.247:39802 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.236:51157/user/Executor#1587797420]) with ID 191
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.174:39008 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 231.0 in stage 0.0 (TID 231, 192.168.100.236, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.110:58832/user/Executor#1031060904]) with ID 190
16/07/22 04:15:29 INFO TaskSetManager: Starting task 232.0 in stage 0.0 (TID 232, 192.168.110.110, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.196:47549/user/Executor#1634737741]) with ID 76
16/07/22 04:15:29 INFO TaskSetManager: Starting task 233.0 in stage 0.0 (TID 233, 192.168.100.196, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.25:53952/user/Executor#1921217878]) with ID 194
16/07/22 04:15:29 INFO TaskSetManager: Starting task 234.0 in stage 0.0 (TID 234, 192.168.100.25, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.23:40235/user/Executor#-1190630097]) with ID 0
16/07/22 04:15:29 INFO TaskSetManager: Starting task 235.0 in stage 0.0 (TID 235, 192.168.100.23, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.40:59723/user/Executor#843939851]) with ID 57
16/07/22 04:15:29 INFO TaskSetManager: Starting task 236.0 in stage 0.0 (TID 236, 192.168.100.40, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.110.187:34100/user/Executor#295802096]) with ID 234
16/07/22 04:15:29 INFO TaskSetManager: Starting task 237.0 in stage 0.0 (TID 237, 192.168.110.187, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.230:50205 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.205:52702 with 265.4 MB RAM, BlockManagerId(144, 192.168.100.205, 52702)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.165:49505 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.240:56064 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.234:42804 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.123:34252 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.55:52933 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.225:33073 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.64:53091 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.130:37872 with 265.4 MB RAM, BlockManagerId(30, 192.168.110.130, 37872)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.31:34245 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.182:40890 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.160:38702 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.35:48804 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.203:47310 with 265.4 MB RAM, BlockManagerId(106, 192.168.110.203, 47310)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.32:60517 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.228:33206 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.58:48376 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.53:49338 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.111.0:39247 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.122:52430 with 265.4 MB RAM, BlockManagerId(79, 192.168.110.122, 52430)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.113:52113 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.133:35636 with 265.4 MB RAM, BlockManagerId(195, 192.168.110.133, 35636)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.28:44560 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.47:60932 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.255:55947 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.26:51359 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.199:47651 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.209:44439 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.112:57681 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.251:48865 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.157:44362 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.235:52071 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.224:56335 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.252:55444 with 265.4 MB RAM, BlockManagerId(193, 192.168.100.252, 55444)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.202:43507 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.147:48059 with 265.4 MB RAM, BlockManagerId(39, 192.168.110.147, 48059)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.114:57155 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.254:46348 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.145:42490 with 265.4 MB RAM, BlockManagerId(75, 192.168.110.145, 42490)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.233:58874 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.249:48491 with 265.4 MB RAM, BlockManagerId(114, 192.168.110.249, 48491)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.22:40729 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 238.0 in stage 0.0 (TID 238, 192.168.110.241, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.180:51875 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.225:54424 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.219:53855 with 265.4 MB RAM, BlockManagerId(122, 192.168.100.219, 53855)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.228:49946 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.239:54745 with 265.4 MB RAM, BlockManagerId(65, 192.168.100.239, 54745)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.65:33143 with 265.4 MB RAM, BlockManagerId(188, 192.168.100.65, 33143)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.121:49516 with 265.4 MB RAM, BlockManagerId(158, 192.168.110.121, 49516)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.247:43866 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.241:45082 with 265.4 MB RAM, BlockManagerId(151, 192.168.100.241, 45082)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.248:56926 with 265.4 MB RAM, BlockManagerId(133, 192.168.110.248, 56926)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.210:41364 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.246:40971 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.242:46250 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.221:56014 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.237:57612 with 265.4 MB RAM, BlockManagerId(123, 192.168.100.237, 57612)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.177:41472 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 239.0 in stage 0.0 (TID 239, 192.168.110.223, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.219:52962 with 265.4 MB RAM, BlockManagerId(108, 192.168.110.219, 52962)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.212:39302 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.253:39465 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.190:42878 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.128:58632 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.235:60577 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.197:38080 with 265.4 MB RAM, BlockManagerId(124, 192.168.110.197, 38080)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.189:45058 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.190:51560 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.162:36994 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.132:38260 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.200:44954 with 265.4 MB RAM, BlockManagerId(110, 192.168.110.200, 44954)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.52:49653 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.181:53454 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.244:48532 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Starting task 240.0 in stage 0.0 (TID 240, 192.168.100.44, PROCESS_LOCAL, 1439 bytes)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.27:45962 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.50:55873 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 6.0 in stage 0.0 (TID 6) in 1374 ms on 192.168.110.241 (1/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.206:55588 with 265.4 MB RAM, BlockManagerId(204, 192.168.110.206, 55588)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.156:34681 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.60:54027 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.206:43121 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.43:51472 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 18.0 in stage 0.0 (TID 18) in 1338 ms on 192.168.110.223 (2/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 0.0 in stage 0.0 (TID 0) in 1432 ms on 192.168.110.227 (3/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.244:40927 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 17.0 in stage 0.0 (TID 17) in 1342 ms on 192.168.110.167 (4/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 20.0 in stage 0.0 (TID 20) in 1335 ms on 192.168.110.218 (5/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 11.0 in stage 0.0 (TID 11) in 1378 ms on 192.168.100.44 (6/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 22.0 in stage 0.0 (TID 22) in 1303 ms on 192.168.110.240 (7/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.245:35332 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.126:45964 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.236:45104 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.191:33298 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.182:53245 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.168:53746 with 265.4 MB RAM, BlockManagerId(231, 192.168.110.168, 53746)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.254:49116 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.163:44477 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.213:58412 with 265.4 MB RAM, BlockManagerId(85, 192.168.100.213, 58412)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.226:54310 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.171:57856 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.210:60681 with 265.4 MB RAM, BlockManagerId(170, 192.168.110.210, 60681)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.218:34461 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.221:52967 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.179:37828 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.33:47615 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.45:53534 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.223:45022 with 265.4 MB RAM, BlockManagerId(129, 192.168.100.223, 45022)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.135:51224 with 265.4 MB RAM, BlockManagerId(239, 192.168.110.135, 51224)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.183:57966 with 265.4 MB RAM, BlockManagerId(70, 192.168.100.183, 57966)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.196:43863 with 265.4 MB RAM, BlockManagerId(226, 192.168.110.196, 43863)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 42.0 in stage 0.0 (TID 42) in 1236 ms on 192.168.110.220 (8/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.150:49095 with 265.4 MB RAM, BlockManagerId(207, 192.168.110.150, 49095)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.234:41005 with 265.4 MB RAM, BlockManagerId(20, 192.168.110.234, 41005)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.250:57475 with 265.4 MB RAM, BlockManagerId(22, 192.168.100.250, 57475)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.242:46362 with 265.4 MB RAM, BlockManagerId(156, 192.168.110.242, 46362)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.154:39977 with 265.4 MB RAM, BlockManagerId(8, 192.168.110.154, 39977)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.146:34004 with 265.4 MB RAM, BlockManagerId(95, 192.168.110.146, 34004)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.227:48520 with 265.4 MB RAM, BlockManagerId(219, 192.168.100.227, 48520)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.189:33751 with 265.4 MB RAM, BlockManagerId(223, 192.168.110.189, 33751)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.179:60011 with 265.4 MB RAM, BlockManagerId(157, 192.168.110.179, 60011)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.38:36493 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.119:47472 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.164:40808 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.166:33856 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.253:49359 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.184:45197 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.151:60059 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.192:50521 with 265.4 MB RAM, BlockManagerId(74, 192.168.110.192, 50521)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.194:35907/user/Executor#1961609326]) with ID 24
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.134:43084 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.185:34494/user/Executor#757335822]) with ID 58
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.204:52018 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO SparkDeploySchedulerBackend: Registered executor: AkkaRpcEndpointRef(Actor[akka.tcp://sparkExecutor@192.168.100.214:38067/user/Executor#462524333]) with ID 160
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.115:45103 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.231:51048 with 265.4 MB RAM, BlockManagerId(81, 192.168.110.231, 51048)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.46:36460 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.207:33074 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.173:46030 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.239:59751 with 265.4 MB RAM, BlockManagerId(182, 192.168.110.239, 59751)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.216:39316 with 265.4 MB RAM, BlockManagerId(87, 192.168.110.216, 39316)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 238.0 in stage 0.0 (TID 238) in 103 ms on 192.168.110.241 (9/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.215:51454 with 265.4 MB RAM, BlockManagerId(97, 192.168.100.215, 51454)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 239.0 in stage 0.0 (TID 239) in 110 ms on 192.168.110.223 (10/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.39:58213 with 265.4 MB RAM, BlockManagerId(220, 192.168.100.39, 58213)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.193:53685 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 240.0 in stage 0.0 (TID 240) in 103 ms on 192.168.100.44 (11/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.230:59054 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.184:39460 with 265.4 MB RAM, BlockManagerId(127, 192.168.110.184, 39460)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.186:57034 with 265.4 MB RAM, BlockManagerId(237, 192.168.100.186, 57034)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.176:45103 with 265.4 MB RAM, BlockManagerId(183, 192.168.110.176, 45103)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.233:37073 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 21.0 in stage 0.0 (TID 21) in 1421 ms on 192.168.110.201 (12/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.42:46659 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 27.0 in stage 0.0 (TID 27) in 1393 ms on 192.168.100.187 (13/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.185:45549 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.243:60947 with 265.4 MB RAM, BlockManagerId(168, 192.168.110.243, 60947)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.111:41697 with 265.4 MB RAM, BlockManagerId(121, 192.168.110.111, 41697)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.213:39853 with 265.4 MB RAM, BlockManagerId(240, 192.168.110.213, 39853)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.191:52091 with 265.4 MB RAM, BlockManagerId(26, 192.168.110.191, 52091)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.118:45656 with 265.4 MB RAM, BlockManagerId(221, 192.168.110.118, 45656)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.251:45635 with 265.4 MB RAM, BlockManagerId(196, 192.168.100.251, 45635)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.237:49825 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.222:51409 with 265.4 MB RAM, BlockManagerId(33, 192.168.100.222, 51409)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.117:49185 with 265.4 MB RAM, BlockManagerId(83, 192.168.110.117, 49185)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.214:35914 with 265.4 MB RAM, BlockManagerId(216, 192.168.110.214, 35914)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.152:58493 with 265.4 MB RAM, BlockManagerId(80, 192.168.110.152, 58493)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.226:50842 with 265.4 MB RAM, BlockManagerId(125, 192.168.100.226, 50842)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 5.0 in stage 0.0 (TID 5) in 1541 ms on 192.168.110.232 (14/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.41:49603 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.120:35836 with 265.4 MB RAM, BlockManagerId(107, 192.168.110.120, 35836)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 36.0 in stage 0.0 (TID 36) in 1411 ms on 192.168.110.247 (15/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 76.0 in stage 0.0 (TID 76) in 1181 ms on 192.168.100.240 (16/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.246:57758 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.238:50537 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.243:44742 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.192:49449 with 265.4 MB RAM, BlockManagerId(137, 192.168.100.192, 49449)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.211:33426 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 40.0 in stage 0.0 (TID 40) in 1405 ms on 192.168.110.174 (17/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.136:51083 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 35.0 in stage 0.0 (TID 35) in 1432 ms on 192.168.110.230 (18/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.29:54149 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.159:40632 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.248:50138 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 43.0 in stage 0.0 (TID 43) in 1410 ms on 192.168.110.165 (19/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 100.0 in stage 0.0 (TID 100) in 1107 ms on 192.168.100.182 (20/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.37:49992 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 69.0 in stage 0.0 (TID 69) in 1252 ms on 192.168.100.64 (21/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.180:56466 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.198:60921 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 57.0 in stage 0.0 (TID 57) in 1315 ms on 192.168.110.123 (22/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.220:58859 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.249:55008 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 89.0 in stage 0.0 (TID 89) in 1165 ms on 192.168.100.55 (23/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.161:51376 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 96.0 in stage 0.0 (TID 96) in 1141 ms on 192.168.100.31 (24/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 67.0 in stage 0.0 (TID 67) in 1282 ms on 192.168.100.32 (25/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.236:57647 with 265.4 MB RAM, BlockManagerId(191, 192.168.100.236, 57647)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.148:51597 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 66.0 in stage 0.0 (TID 66) in 1293 ms on 192.168.100.234 (26/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 50.0 in stage 0.0 (TID 50) in 1395 ms on 192.168.110.160 (27/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 44.0 in stage 0.0 (TID 44) in 1425 ms on 192.168.100.53 (28/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.116:52050 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 46.0 in stage 0.0 (TID 46) in 1412 ms on 192.168.110.228 (29/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.40:39314 with 265.4 MB RAM, BlockManagerId(57, 192.168.100.40, 39314)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.144:51982 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 88.0 in stage 0.0 (TID 88) in 1193 ms on 192.168.100.28 (30/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.212:56391 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 99.0 in stage 0.0 (TID 99) in 1147 ms on 192.168.100.235 (31/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.194:46843 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.125:39778 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 49.0 in stage 0.0 (TID 49) in 1416 ms on 192.168.100.26 (32/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.110:48341 with 265.4 MB RAM, BlockManagerId(190, 192.168.110.110, 48341)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.195:53070 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 13.0 in stage 0.0 (TID 13) in 1594 ms on 192.168.110.190 (33/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 68.0 in stage 0.0 (TID 68) in 1298 ms on 192.168.100.35 (34/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.193:48993 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 31.0 in stage 0.0 (TID 31) in 1502 ms on 192.168.110.212 (35/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 98.0 in stage 0.0 (TID 98) in 1178 ms on 192.168.100.22 (36/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 24.0 in stage 0.0 (TID 24) in 1556 ms on 192.168.100.33 (37/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 86.0 in stage 0.0 (TID 86) in 1231 ms on 192.168.110.202 (38/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 28.0 in stage 0.0 (TID 28) in 1529 ms on 192.168.110.132 (39/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 16.0 in stage 0.0 (TID 16) in 1607 ms on 192.168.100.191 (40/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 85.0 in stage 0.0 (TID 85) in 1240 ms on 192.168.110.114 (41/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 29.0 in stage 0.0 (TID 29) in 1532 ms on 192.168.110.235 (42/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.170:44136 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 79.0 in stage 0.0 (TID 79) in 1268 ms on 192.168.100.50 (43/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 87.0 in stage 0.0 (TID 87) in 1238 ms on 192.168.110.182 (44/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 59.0 in stage 0.0 (TID 59) in 1370 ms on 192.168.100.228 (45/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 55.0 in stage 0.0 (TID 55) in 1408 ms on 192.168.100.206 (46/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 34.0 in stage 0.0 (TID 34) in 1523 ms on 192.168.100.45 (47/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.23:44079 with 265.4 MB RAM, BlockManagerId(0, 192.168.100.23, 44079)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 63.0 in stage 0.0 (TID 63) in 1358 ms on 192.168.100.246 (48/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.30:36165 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 23.0 in stage 0.0 (TID 23) in 1577 ms on 192.168.110.236 (49/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 51.0 in stage 0.0 (TID 51) in 1442 ms on 192.168.100.224 (50/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.224:35170 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 92.0 in stage 0.0 (TID 92) in 1229 ms on 192.168.110.253 (51/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 112.0 in stage 0.0 (TID 112) in 1135 ms on 192.168.100.38 (52/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 82.0 in stage 0.0 (TID 82) in 1273 ms on 192.168.110.163 (53/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.25:44017 with 265.4 MB RAM, BlockManagerId(194, 192.168.100.25, 44017)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.222:44371 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 74.0 in stage 0.0 (TID 74) in 1321 ms on 192.168.100.254 (54/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 45.0 in stage 0.0 (TID 45) in 1490 ms on 192.168.110.225 (55/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.129:42662 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.61:49537 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 52.0 in stage 0.0 (TID 52) in 1448 ms on 192.168.110.255 (56/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 103.0 in stage 0.0 (TID 103) in 1201 ms on 192.168.111.0 (57/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.183:35173 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.217:54604 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 61.0 in stage 0.0 (TID 61) in 1397 ms on 192.168.100.47 (58/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 7.0 in stage 0.0 (TID 7) in 1688 ms on 192.168.100.210 (59/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 39.0 in stage 0.0 (TID 39) in 1545 ms on 192.168.110.128 (60/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 101.0 in stage 0.0 (TID 101) in 1216 ms on 192.168.110.162 (61/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 80.0 in stage 0.0 (TID 80) in 1306 ms on 192.168.110.199 (62/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 8.0 in stage 0.0 (TID 8) in 1691 ms on 192.168.100.190 (63/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 70.0 in stage 0.0 (TID 70) in 1360 ms on 192.168.110.209 (64/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 75.0 in stage 0.0 (TID 75) in 1326 ms on 192.168.100.233 (65/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 4.0 in stage 0.0 (TID 4) in 1701 ms on 192.168.100.253 (66/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 19.0 in stage 0.0 (TID 19) in 1654 ms on 192.168.110.254 (67/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.158:42687 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.211:49616 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.172:47752 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.178:50510 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 14.0 in stage 0.0 (TID 14) in 1674 ms on 192.168.110.245 (68/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 84.0 in stage 0.0 (TID 84) in 1303 ms on 192.168.100.60 (69/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 65.0 in stage 0.0 (TID 65) in 1401 ms on 192.168.110.177 (70/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 32.0 in stage 0.0 (TID 32) in 1579 ms on 192.168.110.112 (71/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 2.0 in stage 0.0 (TID 2) in 1715 ms on 192.168.110.251 (72/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 33.0 in stage 0.0 (TID 33) in 1580 ms on 192.168.100.52 (73/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 64.0 in stage 0.0 (TID 64) in 1410 ms on 192.168.110.221 (74/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.196:45307 with 265.4 MB RAM, BlockManagerId(76, 192.168.100.196, 45307)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 1.0 in stage 0.0 (TID 1) in 1723 ms on 192.168.100.189 (75/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 83.0 in stage 0.0 (TID 83) in 1317 ms on 192.168.110.244 (76/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 3.0 in stage 0.0 (TID 3) in 1723 ms on 192.168.100.244 (77/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.229:41226 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 15.0 in stage 0.0 (TID 15) in 1683 ms on 192.168.110.171 (78/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.252:39094 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 47.0 in stage 0.0 (TID 47) in 1526 ms on 192.168.100.247 (79/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 72.0 in stage 0.0 (TID 72) in 1378 ms on 192.168.110.115 (80/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.110.187:54870 with 265.4 MB RAM, BlockManagerId(234, 192.168.110.187, 54870)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 53.0 in stage 0.0 (TID 53) in 1490 ms on 192.168.110.226 (81/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 26.0 in stage 0.0 (TID 26) in 1625 ms on 192.168.100.221 (82/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 102.0 in stage 0.0 (TID 102) in 1251 ms on 192.168.100.193 (83/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 37.0 in stage 0.0 (TID 37) in 1592 ms on 192.168.110.119 (84/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.245:37883 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.185:57721 with 265.4 MB RAM, BlockManagerId(58, 192.168.100.185, 57721)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 56.0 in stage 0.0 (TID 56) in 1482 ms on 192.168.100.58 (85/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.205:34025 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.186:47152 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 119.0 in stage 0.0 (TID 119) in 1137 ms on 192.168.110.233 (86/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 41.0 in stage 0.0 (TID 41) in 1579 ms on 192.168.110.157 (87/241)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.214:53554 with 265.4 MB RAM, BlockManagerId(160, 192.168.100.214, 53554)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 107.0 in stage 0.0 (TID 107) in 1242 ms on 192.168.110.237 (88/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 38.0 in stage 0.0 (TID 38) in 1602 ms on 192.168.110.156 (89/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 94.0 in stage 0.0 (TID 94) in 1308 ms on 192.168.100.42 (90/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 58.0 in stage 0.0 (TID 58) in 1480 ms on 192.168.100.225 (91/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 117.0 in stage 0.0 (TID 117) in 1167 ms on 192.168.110.126 (92/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 60.0 in stage 0.0 (TID 60) in 1469 ms on 192.168.110.166 (93/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 54.0 in stage 0.0 (TID 54) in 1516 ms on 192.168.110.164 (94/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 10.0 in stage 0.0 (TID 10) in 1754 ms on 192.168.100.46 (95/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 12.0 in stage 0.0 (TID 12) in 1738 ms on 192.168.100.43 (96/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 9.0 in stage 0.0 (TID 9) in 1759 ms on 192.168.100.184 (97/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 78.0 in stage 0.0 (TID 78) in 1385 ms on 192.168.100.218 (98/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 97.0 in stage 0.0 (TID 97) in 1309 ms on 192.168.110.207 (99/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 48.0 in stage 0.0 (TID 48) in 1568 ms on 192.168.110.151 (100/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 118.0 in stage 0.0 (TID 118) in 1178 ms on 192.168.100.204 (101/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 111.0 in stage 0.0 (TID 111) in 1251 ms on 192.168.100.242 (102/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 129.0 in stage 0.0 (TID 129) in 1129 ms on 192.168.110.238 (103/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 73.0 in stage 0.0 (TID 73) in 1421 ms on 192.168.110.134 (104/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 62.0 in stage 0.0 (TID 62) in 1477 ms on 192.168.110.113 (105/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 71.0 in stage 0.0 (TID 71) in 1433 ms on 192.168.100.180 (106/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.63:49618 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 81.0 in stage 0.0 (TID 81) in 1387 ms on 192.168.110.173 (107/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 116.0 in stage 0.0 (TID 116) in 1194 ms on 192.168.100.179 (108/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.181:50728 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.21:34156 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerMasterEndpoint: Registering block manager 192.168.100.194:34179 with 265.4 MB RAM, BlockManagerId(24, 192.168.100.194, 34179)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 109.0 in stage 0.0 (TID 109) in 1278 ms on 192.168.100.230 (109/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.208:48802 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 90.0 in stage 0.0 (TID 90) in 1364 ms on 192.168.100.243 (110/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.153:36242 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 95.0 in stage 0.0 (TID 95) in 1347 ms on 192.168.110.185 (111/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.231:45798 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.24:43604 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 25.0 in stage 0.0 (TID 25) in 1699 ms on 192.168.110.181 (112/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 104.0 in stage 0.0 (TID 104) in 1314 ms on 192.168.110.246 (113/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 124.0 in stage 0.0 (TID 124) in 1180 ms on 192.168.110.136 (114/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 93.0 in stage 0.0 (TID 93) in 1368 ms on 192.168.100.41 (115/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.188:47545 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 108.0 in stage 0.0 (TID 108) in 1303 ms on 192.168.100.211 (116/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 120.0 in stage 0.0 (TID 120) in 1214 ms on 192.168.100.29 (117/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 77.0 in stage 0.0 (TID 77) in 1445 ms on 192.168.100.27 (118/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 113.0 in stage 0.0 (TID 113) in 1260 ms on 192.168.100.220 (119/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 130.0 in stage 0.0 (TID 130) in 1180 ms on 192.168.100.248 (120/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 135.0 in stage 0.0 (TID 135) in 1109 ms on 192.168.110.159 (121/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 138.0 in stage 0.0 (TID 138) in 1101 ms on 192.168.110.198 (122/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 91.0 in stage 0.0 (TID 91) in 1410 ms on 192.168.110.180 (123/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 134.0 in stage 0.0 (TID 134) in 1135 ms on 192.168.110.125 (124/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 136.0 in stage 0.0 (TID 136) in 1128 ms on 192.168.110.193 (125/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 121.0 in stage 0.0 (TID 121) in 1250 ms on 192.168.110.144 (126/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 110.0 in stage 0.0 (TID 110) in 1349 ms on 192.168.100.195 (127/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.127:55999 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 143.0 in stage 0.0 (TID 143) in 1121 ms on 192.168.100.212 (128/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 123.0 in stage 0.0 (TID 123) in 1252 ms on 192.168.110.194 (129/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 106.0 in stage 0.0 (TID 106) in 1380 ms on 192.168.100.249 (130/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 105.0 in stage 0.0 (TID 105) in 1388 ms on 192.168.100.37 (131/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 128.0 in stage 0.0 (TID 128) in 1250 ms on 192.168.110.148 (132/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 146.0 in stage 0.0 (TID 146) in 1125 ms on 192.168.110.161 (133/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 115.0 in stage 0.0 (TID 115) in 1323 ms on 192.168.110.116 (134/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.188:44175 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.140:35662 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 148.0 in stage 0.0 (TID 148) in 1153 ms on 192.168.110.224 (135/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 149.0 in stage 0.0 (TID 149) in 1116 ms on 192.168.110.170 (136/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 127.0 in stage 0.0 (TID 127) in 1323 ms on 192.168.100.61 (137/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 145.0 in stage 0.0 (TID 145) in 1203 ms on 192.168.110.211 (138/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 132.0 in stage 0.0 (TID 132) in 1262 ms on 192.168.110.217 (139/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 131.0 in stage 0.0 (TID 131) in 1267 ms on 192.168.110.172 (140/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 137.0 in stage 0.0 (TID 137) in 1234 ms on 192.168.110.222 (141/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 125.0 in stage 0.0 (TID 125) in 1340 ms on 192.168.100.229 (142/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.169:57567 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 142.0 in stage 0.0 (TID 142) in 1220 ms on 192.168.110.252 (143/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.250:60699 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 141.0 in stage 0.0 (TID 141) in 1226 ms on 192.168.110.183 (144/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 139.0 in stage 0.0 (TID 139) in 1235 ms on 192.168.110.129 (145/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 153.0 in stage 0.0 (TID 153) in 1106 ms on 192.168.100.30 (146/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 155.0 in stage 0.0 (TID 155) in 1090 ms on 192.168.100.24 (147/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.124:36009 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 152.0 in stage 0.0 (TID 152) in 1117 ms on 192.168.110.178 (148/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 114.0 in stage 0.0 (TID 114) in 1418 ms on 192.168.110.158 (149/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.217:41147 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 144.0 in stage 0.0 (TID 144) in 1239 ms on 192.168.100.181 (150/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.130:37872 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.149:56957 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 122.0 in stage 0.0 (TID 122) in 1392 ms on 192.168.100.21 (151/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 140.0 in stage 0.0 (TID 140) in 1266 ms on 192.168.100.63 (152/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.34:40752 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.219:52962 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 126.0 in stage 0.0 (TID 126) in 1382 ms on 192.168.110.153 (153/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.133:35636 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 30.0 in stage 0.0 (TID 30) in 1897 ms on 192.168.110.208 (154/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 151.0 in stage 0.0 (TID 151) in 1168 ms on 192.168.100.231 (155/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.147:48059 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.197:38080 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.206:55588 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.168:53746 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.204:57065 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.139:48190 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.138:41891 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 133.0 in stage 0.0 (TID 133) in 1330 ms on 192.168.110.205 (156/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.143:46850 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.155:44803 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.121:49516 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.195:60663 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.248:56926 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 150.0 in stage 0.0 (TID 150) in 1201 ms on 192.168.100.245 (157/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.238:48994 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.192:50521 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 147.0 in stage 0.0 (TID 147) in 1278 ms on 192.168.100.188 (158/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.196:43863 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.210:60681 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.145:42490 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.135:51224 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.239:54745 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.183:57966 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.200:44954 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.241:45082 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 157.0 in stage 0.0 (TID 157) in 1157 ms on 192.168.110.188 (159/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.213:58412 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 154.0 in stage 0.0 (TID 154) in 1200 ms on 192.168.110.127 (160/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.150:49095 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.250:57475 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 156.0 in stage 0.0 (TID 156) in 1166 ms on 192.168.110.186 (161/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 162.0 in stage 0.0 (TID 162) in 1133 ms on 192.168.110.140 (162/241)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.205:52702 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.65:33143 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.242:46362 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.189:33751 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.146:34004 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 159.0 in stage 0.0 (TID 159) in 1204 ms on 192.168.110.169 (163/241)
16/07/22 04:15:29 INFO TaskSetManager: Finished task 167.0 in stage 0.0 (TID 167) in 1146 ms on 192.168.110.124 (164/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 171.0 in stage 0.0 (TID 171) in 1139 ms on 192.168.100.217 (165/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 164.0 in stage 0.0 (TID 164) in 1168 ms on 192.168.110.250 (166/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 176.0 in stage 0.0 (TID 176) in 1127 ms on 192.168.110.130 (167/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.154:39977 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.237:57612 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.252:55444 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.184:39460 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 183.0 in stage 0.0 (TID 183) in 1116 ms on 192.168.110.219 (168/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.223:45022 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.234:41005 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 166.0 in stage 0.0 (TID 166) in 1186 ms on 192.168.100.34 (169/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.249:48491 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.179:60011 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.231:51048 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.118:45656 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.186:57034 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 158.0 in stage 0.0 (TID 158) in 1253 ms on 192.168.110.149 (170/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.111:41697 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 174.0 in stage 0.0 (TID 174) in 1162 ms on 192.168.110.133 (171/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.191:52091 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 195.0 in stage 0.0 (TID 195) in 1035 ms on 192.168.110.168 (172/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 178.0 in stage 0.0 (TID 178) in 1154 ms on 192.168.110.147 (173/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.222:51409 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.176:45103 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 188.0 in stage 0.0 (TID 188) in 1121 ms on 192.168.110.206 (174/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 185.0 in stage 0.0 (TID 185) in 1132 ms on 192.168.110.197 (175/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.243:60947 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 160.0 in stage 0.0 (TID 160) in 1261 ms on 192.168.110.138 (176/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 181.0 in stage 0.0 (TID 181) in 1148 ms on 192.168.110.121 (177/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 163.0 in stage 0.0 (TID 163) in 1222 ms on 192.168.110.143 (178/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 186.0 in stage 0.0 (TID 186) in 1144 ms on 192.168.110.248 (179/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.213:39853 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 169.0 in stage 0.0 (TID 169) in 1213 ms on 192.168.110.195 (180/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 172.0 in stage 0.0 (TID 172) in 1205 ms on 192.168.110.139 (181/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 208.0 in stage 0.0 (TID 208) in 1033 ms on 192.168.110.196 (182/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 161.0 in stage 0.0 (TID 161) in 1283 ms on 192.168.110.155 (183/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 204.0 in stage 0.0 (TID 204) in 1044 ms on 192.168.110.192 (184/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.239:59751 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 170.0 in stage 0.0 (TID 170) in 1226 ms on 192.168.100.238 (185/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 196.0 in stage 0.0 (TID 196) in 1074 ms on 192.168.110.210 (186/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 199.0 in stage 0.0 (TID 199) in 1063 ms on 192.168.110.135 (187/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 177.0 in stage 0.0 (TID 177) in 1207 ms on 192.168.110.145 (188/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 190.0 in stage 0.0 (TID 190) in 1162 ms on 192.168.100.239 (189/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.226:50842 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 192.0 in stage 0.0 (TID 192) in 1109 ms on 192.168.110.200 (190/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.39:58213 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.122:52430 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 205.0 in stage 0.0 (TID 205) in 1062 ms on 192.168.100.183 (191/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.251:45635 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 209.0 in stage 0.0 (TID 209) in 1065 ms on 192.168.110.150 (192/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 198.0 in stage 0.0 (TID 198) in 1089 ms on 192.168.100.250 (193/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 187.0 in stage 0.0 (TID 187) in 1191 ms on 192.168.100.241 (194/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.216:39316 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 193.0 in stage 0.0 (TID 193) in 1121 ms on 192.168.100.213 (195/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.120:35836 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.236:57647 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.192:49449 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 168.0 in stage 0.0 (TID 168) in 1288 ms on 192.168.110.204 (196/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 201.0 in stage 0.0 (TID 201) in 1109 ms on 192.168.110.242 (197/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 203.0 in stage 0.0 (TID 203) in 1115 ms on 192.168.110.146 (198/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 191.0 in stage 0.0 (TID 191) in 1233 ms on 192.168.100.65 (199/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 202.0 in stage 0.0 (TID 202) in 1136 ms on 192.168.110.189 (200/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 179.0 in stage 0.0 (TID 179) in 1283 ms on 192.168.100.252 (201/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 184.0 in stage 0.0 (TID 184) in 1268 ms on 192.168.100.237 (202/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 214.0 in stage 0.0 (TID 214) in 1086 ms on 192.168.110.184 (203/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 194.0 in stage 0.0 (TID 194) in 1189 ms on 192.168.100.223 (204/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 212.0 in stage 0.0 (TID 212) in 1142 ms on 192.168.110.154 (205/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 210.0 in stage 0.0 (TID 210) in 1153 ms on 192.168.110.231 (206/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 227.0 in stage 0.0 (TID 227) in 1074 ms on 192.168.110.191 (207/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 189.0 in stage 0.0 (TID 189) in 1272 ms on 192.168.110.249 (208/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 215.0 in stage 0.0 (TID 215) in 1099 ms on 192.168.110.111 (209/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 207.0 in stage 0.0 (TID 207) in 1160 ms on 192.168.110.234 (210/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 200.0 in stage 0.0 (TID 200) in 1175 ms on 192.168.110.179 (211/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 220.0 in stage 0.0 (TID 220) in 1095 ms on 192.168.100.186 (212/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 216.0 in stage 0.0 (TID 216) in 1103 ms on 192.168.110.118 (213/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 223.0 in stage 0.0 (TID 223) in 1093 ms on 192.168.110.176 (214/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 221.0 in stage 0.0 (TID 221) in 1102 ms on 192.168.110.243 (215/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.219:53855 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.40:39314 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 222.0 in stage 0.0 (TID 222) in 1118 ms on 192.168.110.213 (216/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 211.0 in stage 0.0 (TID 211) in 1193 ms on 192.168.110.239 (217/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.117:49185 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.110:48341 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 173.0 in stage 0.0 (TID 173) in 1390 ms on 192.168.100.205 (218/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 224.0 in stage 0.0 (TID 224) in 1139 ms on 192.168.100.251 (219/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 218.0 in stage 0.0 (TID 218) in 1158 ms on 192.168.100.39 (220/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.187:54870 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 165.0 in stage 0.0 (TID 165) in 1440 ms on 192.168.110.122 (221/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 206.0 in stage 0.0 (TID 206) in 1240 ms on 192.168.110.216 (222/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 229.0 in stage 0.0 (TID 229) in 1153 ms on 192.168.110.120 (223/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 217.0 in stage 0.0 (TID 217) in 1182 ms on 192.168.100.226 (224/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 225.0 in stage 0.0 (TID 225) in 1175 ms on 192.168.100.192 (225/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.196:45307 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 231.0 in stage 0.0 (TID 231) in 1184 ms on 192.168.100.236 (226/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.25:44017 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 226.0 in stage 0.0 (TID 226) in 1206 ms on 192.168.100.222 (227/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.227:48520 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.215:51454 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.100.23:44079 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 236.0 in stage 0.0 (TID 236) in 1280 ms on 192.168.100.40 (228/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 228.0 in stage 0.0 (TID 228) in 1309 ms on 192.168.110.117 (229/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 232.0 in stage 0.0 (TID 232) in 1321 ms on 192.168.110.110 (230/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 237.0 in stage 0.0 (TID 237) in 1315 ms on 192.168.110.187 (231/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 233.0 in stage 0.0 (TID 233) in 1339 ms on 192.168.100.196 (232/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 182.0 in stage 0.0 (TID 182) in 1636 ms on 192.168.100.219 (233/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.229:59907 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.203:47310 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 234.0 in stage 0.0 (TID 234) in 1430 ms on 192.168.100.25 (234/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 235.0 in stage 0.0 (TID 235) in 1461 ms on 192.168.100.23 (235/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 197.0 in stage 0.0 (TID 197) in 1606 ms on 192.168.100.227 (236/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 213.0 in stage 0.0 (TID 213) in 1540 ms on 192.168.100.215 (237/241)
16/07/22 04:15:30 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.214:35914 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 180.0 in stage 0.0 (TID 180) in 1825 ms on 192.168.110.203 (238/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 175.0 in stage 0.0 (TID 175) in 1854 ms on 192.168.110.229 (239/241)
16/07/22 04:15:30 INFO TaskSetManager: Finished task 230.0 in stage 0.0 (TID 230) in 1750 ms on 192.168.110.214 (240/241)
16/07/22 04:15:32 INFO BlockManagerInfo: Added broadcast_0_piece0 in memory on 192.168.110.152:58493 (size: 1210.0 B, free: 265.4 MB)
16/07/22 04:15:32 INFO TaskSetManager: Finished task 219.0 in stage 0.0 (TID 219) in 3586 ms on 192.168.110.152 (241/241)
16/07/22 04:15:32 INFO TaskSchedulerImpl: Removed TaskSet 0.0, whose tasks have all completed, from pool 
16/07/22 04:15:32 INFO DAGScheduler: ResultStage 0 (count at ScpFile.scala:35) finished in 7.143 s
16/07/22 04:15:32 INFO DAGScheduler: Job 0 finished: count at ScpFile.scala:35, took 7.498344 s
Exception in thread "main" org.apache.spark.SparkException: Task not serializable
	at org.apache.spark.util.ClosureCleaner$.ensureSerializable(ClosureCleaner.scala:315)
	at org.apache.spark.util.ClosureCleaner$.org$apache$spark$util$ClosureCleaner$$clean(ClosureCleaner.scala:305)
	at org.apache.spark.util.ClosureCleaner$.clean(ClosureCleaner.scala:132)
	at org.apache.spark.SparkContext.clean(SparkContext.scala:1891)
	at org.apache.spark.rdd.RDD$$anonfun$map$1.apply(RDD.scala:294)
	at org.apache.spark.rdd.RDD$$anonfun$map$1.apply(RDD.scala:293)
	at org.apache.spark.rdd.RDDOperationScope$.withScope(RDDOperationScope.scala:148)
	at org.apache.spark.rdd.RDDOperationScope$.withScope(RDDOperationScope.scala:109)
	at org.apache.spark.rdd.RDD.withScope(RDD.scala:286)
	at org.apache.spark.rdd.RDD.map(RDD.scala:293)
	at ScpFile$$anonfun$main$2.apply(ScpFile.scala:40)
	at ScpFile$$anonfun$main$2.apply(ScpFile.scala:36)
	at scala.collection.Iterator$class.foreach(Iterator.scala:727)
	at scala.collection.AbstractIterator.foreach(Iterator.scala:1157)
	at ScpFile$.main(ScpFile.scala:36)
	at ScpFile.main(ScpFile.scala)
	at sun.reflect.NativeMethodAccessorImpl.invoke0(Native Method)
	at sun.reflect.NativeMethodAccessorImpl.invoke(NativeMethodAccessorImpl.java:57)
	at sun.reflect.DelegatingMethodAccessorImpl.invoke(DelegatingMethodAccessorImpl.java:43)
	at java.lang.reflect.Method.invoke(Method.java:606)
	at org.apache.spark.deploy.SparkSubmit$.org$apache$spark$deploy$SparkSubmit$$runMain(SparkSubmit.scala:664)
	at org.apache.spark.deploy.SparkSubmit$.doRunMain$1(SparkSubmit.scala:169)
	at org.apache.spark.deploy.SparkSubmit$.submit(SparkSubmit.scala:192)
	at org.apache.spark.deploy.SparkSubmit$.main(SparkSubmit.scala:111)
	at org.apache.spark.deploy.SparkSubmit.main(SparkSubmit.scala)
Caused by: java.io.NotSerializableException: java.io.BufferedWriter
Serialization stack:
	- object not serializable (class: java.io.BufferedWriter, value: java.io.BufferedWriter@450303e5)
	- field (class: ScpFile$$anonfun$main$2$$anonfun$apply$1, name: out$1, type: class java.io.BufferedWriter)
	- object (class ScpFile$$anonfun$main$2$$anonfun$apply$1, <function1>)
	at org.apache.spark.serializer.SerializationDebugger$.improveException(SerializationDebugger.scala:40)
	at org.apache.spark.serializer.JavaSerializationStream.writeObject(JavaSerializer.scala:47)
	at org.apache.spark.serializer.JavaSerializerInstance.serialize(JavaSerializer.scala:81)
	at org.apache.spark.util.ClosureCleaner$.ensureSerializable(ClosureCleaner.scala:312)
	... 24 more
16/07/22 04:15:32 INFO SparkContext: Invoking stop() from shutdown hook
16/07/22 04:15:32 INFO SparkUI: Stopped Spark web UI at http://10.2.2.132:4040
16/07/22 04:15:32 INFO DAGScheduler: Stopping DAGScheduler
16/07/22 04:15:32 INFO SparkDeploySchedulerBackend: Shutting down all executors
16/07/22 04:15:32 INFO SparkDeploySchedulerBackend: Asking each executor to shut down
16/07/22 04:15:33 WARN QueuedThreadPool: 145 threads could not be stopped
16/07/22 04:15:33 INFO MapOutputTrackerMasterEndpoint: MapOutputTrackerMasterEndpoint stopped!
16/07/22 04:15:33 INFO Utils: path = /home/wzy/tmp/spark-5fec7fb2-b3e3-401b-8e29-d63576c26a12/blockmgr-c7fc4245-053c-4731-830c-d398ebe3d0be, already present as root for deletion.
16/07/22 04:15:33 INFO MemoryStore: MemoryStore cleared
16/07/22 04:15:33 INFO BlockManager: BlockManager stopped
16/07/22 04:15:33 INFO BlockManagerMaster: BlockManagerMaster stopped
16/07/22 04:15:33 INFO OutputCommitCoordinator$OutputCommitCoordinatorEndpoint: OutputCommitCoordinator stopped!
16/07/22 04:15:33 INFO SparkContext: Successfully stopped SparkContext
16/07/22 04:15:33 INFO Utils: Shutdown hook called
16/07/22 04:15:33 INFO Utils: Deleting directory /home/wzy/tmp/spark-5fec7fb2-b3e3-401b-8e29-d63576c26a12
