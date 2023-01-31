#------------------------ Tool Specifications & Options ----------------------

COMPILER  =  lcc

CC        =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcc64.exe"
LD        =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcclnk64.exe"
LIBCMD    =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcclib64.exe"
CFLAGS    =  -dll -noregistrylookup  -c -Zp8 -DLCC_WIN64 -DMATLAB_MEX_FILE -nodeclspec
LDFLAGS   =  -s -dll -entry LibMain 12DQpr2GhqS1qsDxRSg7C_cclib.def -L"C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\lib64"

OBJECTS = \
	   Alarm.obj \
	   slcc_interface_12DQpr2GhqS1qsDxRSg7C.obj \
	   lccstub.obj \

STATICLIBS = \

#------------------------------ Include/Lib Path ------------------------------

INCLUDE_PATH = \
     -I"c:\program files\matlab\r2019a\extern\include" \
     -I"c:\program files\matlab\r2019a\simulink\include" \
     -I"c:\users\raouf\desktop\iti\matlab & mbd\mbd_alarm\slprj\_slcc\12dqpr2ghqs1qsdxrsg7c" \
     -I"c:\users\raouf\desktop\iti\matlab & mbd\mbd_alarm" \
     -I"c:\program files\matlab\r2019a\sys\lcc64\lcc64\include64" \
     -I"c:\program files\matlab\r2019a\sys\lcc64\lcc64\mex" \

#--------------------------------- Rules --------------------------------------

12DQpr2GhqS1qsDxRSg7C_cclib.dll : $(MAKEFILE) $(OBJECTS)
	$(LD) $(LDFLAGS) /OUT:12DQpr2GhqS1qsDxRSg7C_cclib.dll $(OBJECTS)  $(STATICLIBS) "C:\Program Files\MATLAB\R2019a\extern\lib\win64\microsoft\libmex.lib" "C:\Program Files\MATLAB\R2019a\extern\lib\win64\microsoft\libmx.lib"
Alarm.obj :	c:\users\raouf\desktop\iti\MATLAB~1\MBD_AL~1\Alarm.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\raouf\desktop\iti\matlab & mbd\mbd_alarm\Alarm.c"
slcc_interface_12DQpr2GhqS1qsDxRSg7C.obj :	C:\Users\Raouf\Desktop\ITI\MATLAB~1\MBD_AL~1\slprj\_slcc\12DQPR~1\SLCC_I~1.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\Raouf\Desktop\ITI\Matlab & MBD\MBD_Alarm\slprj\_slcc\12DQpr2GhqS1qsDxRSg7C\slcc_interface_12DQpr2GhqS1qsDxRSg7C.c"
lccstub.obj :	C:\PROGRA~1\MATLAB\R2019a\sys\lcc64\lcc64\mex\lccstub.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\mex\lccstub.c"
