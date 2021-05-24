all:constptr apple pconst apple2 a 

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

constptr:constptr.cpp
	g++ $(CFLAGS) -o constptr constptr.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
	cp constptr $(BINHOME)/constptr 
	cp constptr.cpp $(CBAK)/constptr.cpp 

apple:apple.cpp
	g++ $(CFLAGS) -o apple apple.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
	cp apple $(BINHOME)/apple 
	cp apple.cpp $(CBAK)/apple.cpp 

pconst:pconst.cpp
	g++ $(CFLAGS) -o pconst pconst.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
	cp pconst $(BINHOME)/pconst 
	cp pconst.cpp $(CBAK)/pconst.cpp 

apple2:apple2.cpp
	g++ $(CFLAGS) -o apple2 apple2.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
	cp apple2 $(BINHOME)/apple2 
	cp apple2.cpp $(CBAK)/apple2.cpp 

a:a.cpp
	g++ $(CFLAGS) -o a a.cpp -lm -lc -I$(PUBLICHOME) -L$(PUBLICHOME) 
	cp a $(BINHOME)/a 
	cp a.cpp $(CBAK)/a.cpp 

clean:
	rm -rf constptr apple pconst apple2 
