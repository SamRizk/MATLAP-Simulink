#------------------------ Tool Specifications & Options ----------------------

COMPILER  =  lcc

CC        =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcc64.exe"
LD        =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcclnk64.exe"
LIBCMD    =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcclib64.exe"
CFLAGS    =  -dll -noregistrylookup  -c -Zp8 -DLCC_WIN64 -DMATLAB_MEX_FILE -nodeclspec
LDFLAGS   =  -s -dll -entry LibMain 7TNQlbbz639YMvZpvpoSXB_cclib.def -L"C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\lib64"

OBJECTS = \
	   Alarm.obj \
	   slcc_interface_7TNQlbbz639YMvZpvpoSXB.obj \
	   lccstub.obj \

STATICLIBS = \

#------------------------------ Include/Lib Path ------------------------------

INCLUDE_PATH = \
     -I"c:\program files\matlab\r2019a\extern\include" \
     -I"c:\program files\matlab\r2019a\simulink\include" \
     -I"c:\users\raouf\desktop\iti\matlab & mbd\mbd_alarm\slprj\_slcc\7tnqlbbz639ymvzpvposxb" \
     -I"c:\users\raouf\desktop\iti\matlab & mbd\mbd_alarm" \
     -I"c:\program files\matlab\r2019a\sys\lcc64\lcc64\include64" \
     -I"c:\program files\matlab\r2019a\sys\lcc64\lcc64\mex" \

#--------------------------------- Rules --------------------------------------

7TNQlbbz639YMvZpvpoSXB_cclib.dll : $(MAKEFILE) $(OBJECTS)
	$(LD) $(LDFLAGS) /OUT:7TNQlbbz639YMvZpvpoSXB_cclib.dll $(OBJECTS)  $(STATICLIBS) "C:\Program Files\MATLAB\R2019a\extern\lib\win64\microsoft\libmex.lib" "C:\Program Files\MATLAB\R2019a\extern\lib\win64\microsoft\libmx.lib"
Alarm.obj :	c:\users\raouf\desktop\iti\MATLAB~1\MBD_AL~1\Alarm.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\raouf\desktop\iti\matlab & mbd\mbd_alarm\Alarm.c"
slcc_interface_7TNQlbbz639YMvZpvpoSXB.obj :	C:\Users\Raouf\Desktop\ITI\MATLAB~1\MBD_AL~1\slprj\_slcc\7TNQLB~1\SLCC_I~1.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\Raouf\Desktop\ITI\Matlab & MBD\MBD_Alarm\slprj\_slcc\7TNQlbbz639YMvZpvpoSXB\slcc_interface_7TNQlbbz639YMvZpvpoSXB.c"
lccstub.obj :	C:\PROGRA~1\MATLAB\R2019a\sys\lcc64\lcc64\mex\lccstub.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\mex\lccstub.c"
