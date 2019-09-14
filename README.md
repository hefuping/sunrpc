# 一、文件说明
文件名         | 作用
------------- | -------------
Makefile.date | 该文件用于编译所有客户机，服务器代码
date_clnt.c   | 该文件包含client_stub,程序员一般不用修改
date_svc.c    | 该文件包含server_stub,程序员一般不用修改
date.h        | 该文件包含了从说明中产生的所有XDR类型
date_server.c | 如果生成此文件，则该文件包含远程服务的stub
date_client.c | 如果生成此文件，则该文件包含了骨架客户机程序。
# 二、编译说明
```C
make -f Makefile.date
```
# 三、测试说明
### 1、运行服务端
```C
./date_server
```
### 2、运行客户端端
```C
./date_client 127.0.0.1
```
# 四、参考文献
http://www.krzyzanowski.org/rutgers/notes/pdf/ra-sunrpc.pdf