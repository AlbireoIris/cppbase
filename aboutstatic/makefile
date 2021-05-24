all:StaticClassFun staticclass nostaticclass a 

# 警告处理
CFLAGS = -Wno-write-strings -g#-Wno-unused-variable

# CFLAGS = -O2
#CFLAGS = -O2 -Wall

#库文件目录路径
PUBLICHOME = /htidc/public/lib

#可执行程序目录路径
BINHOME = /htidc/shqx/bin

#备份目录路径
CBAK = /htidc/shqx/c_bak

#libfreecplus.so的引用
FREECPLUSLIB = -l_freecplus -lcJSON 

#通用库ftp路径
FTPLIB = -l_ftp

# oracle头文件路径
ORACLEHEAD = -I$(ORACLE_HOME)/rdbms/public

# oracle库文件路径
ORACLELIB =  -L$(ORACLE_HOME)/lib -L.

# oracle的OCI库
OCILIB = -lclntsh

#_occi.h和_mylib.h的路径
OCICPP = $(PUBLICHOME)/_ooci.cpp $(PUBLICHOME)/_mylib.cpp

# _freecplus框架整合
IFREECPLUS = $(FREECPLUSLIB)

#_ftp框架整合
IFTP = $(FTPLIB)

#occi框架整合
IOCCI = $(ORACLELIB) $(ORACLEHEAD) $(OCILIB) $(OCICPP)

StaticClassFun:StaticClassFun.cpp
	g++ $(CFLAGS) -o StaticClassFun StaticClassFun.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
staticclass:staticclass.cpp
	g++ $(CFLAGS) -o staticclass staticclass.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
nostaticclass:nostaticclass.cpp
	g++ $(CFLAGS) -o nostaticclass nostaticclass.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
a:a.cpp
	g++ $(CFLAGS) -o a a.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
clean:
	rm -rf StaticClassFun staticclass nostaticclass 
