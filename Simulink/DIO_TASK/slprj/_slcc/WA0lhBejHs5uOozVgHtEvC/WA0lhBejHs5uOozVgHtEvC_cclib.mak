#------------------------ Tool Specifications & Options ----------------------

COMPILER  =  lcc

CC        =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcc64.exe"
LD        =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcclnk64.exe"
LIBCMD    =  "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\bin\lcclib64.exe"
CFLAGS    =  -dll -noregistrylookup  -c -Zp8 -DLCC_WIN64 -DMATLAB_MEX_FILE -nodeclspec
LDFLAGS   =  -s -dll -entry LibMain WA0lhBejHs5uOozVgHtEvC_cclib.def -L"C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\lib64"

OBJECTS = \
	   DIO.obj \
	   slcc_interface_WA0lhBejHs5uOozVgHtEvC.obj \
	   lccstub.obj \

STATICLIBS = \

#------------------------------ Include/Lib Path ------------------------------

INCLUDE_PATH = \
     -I"c:\program files\matlab\r2019a\extern\include" \
     -I"c:\program files\matlab\r2019a\simulink\include" \
     -I"c:\users\raouf\desktop\iti\matlab & mbd\dio_task\slprj\_slcc\wa0lhbejhs5uoozvghtevc" \
     -I"c:\users\raouf\desktop\iti\matlab & mbd\dio_task" \
     -I"c:\program files\matlab\r2019a\sys\lcc64\lcc64\include64" \
     -I"c:\program files\matlab\r2019a\sys\lcc64\lcc64\mex" \

#--------------------------------- Rules --------------------------------------

WA0lhBejHs5uOozVgHtEvC_cclib.dll : $(MAKEFILE) $(OBJECTS)
	$(LD) $(LDFLAGS) /OUT:WA0lhBejHs5uOozVgHtEvC_cclib.dll $(OBJECTS)  $(STATICLIBS) "C:\Program Files\MATLAB\R2019a\extern\lib\win64\microsoft\libmex.lib" "C:\Program Files\MATLAB\R2019a\extern\lib\win64\microsoft\libmx.lib"
DIO.obj :	c:\users\raouf\desktop\iti\MATLAB~1\dio_task\DIO.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\users\raouf\desktop\iti\matlab & mbd\dio_task\DIO.c"
slcc_interface_WA0lhBejHs5uOozVgHtEvC.obj :	C:\Users\Raouf\Desktop\ITI\MATLAB~1\DIO_TASK\slprj\_slcc\WA0LHB~1\SLCC_I~1.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\Raouf\Desktop\ITI\Matlab & MBD\DIO_TASK\slprj\_slcc\WA0lhBejHs5uOozVgHtEvC\slcc_interface_WA0lhBejHs5uOozVgHtEvC.c"
lccstub.obj :	C:\PROGRA~1\MATLAB\R2019a\sys\lcc64\lcc64\mex\lccstub.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2019a\sys\lcc64\lcc64\mex\lccstub.c"
