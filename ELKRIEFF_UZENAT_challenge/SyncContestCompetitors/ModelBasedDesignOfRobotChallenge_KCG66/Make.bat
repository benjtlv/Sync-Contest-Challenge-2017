@SET PATH=C:/Program Files (x86)/Esterel Technologies/SCADE R17.2/SCADE/../contrib/Msys/mingw_w64/bin;%PATH%
@SET INCLUDE=C:/Program Files (x86)/Esterel Technologies/SCADE R17.2/SCADE/../contrib/Msys/mingw_w64/include
@SET LIB=C:/Program Files (x86)/Esterel Technologies/SCADE R17.2/SCADE/../contrib/Msys/mingw_w64/lib
@IF "-B"=="%1" SET ARG=%1
gcc -print-search-dirs
@"C:/Program Files (x86)/Esterel Technologies/SCADE R17.2/SCADE/../contrib/Msys/mingw_w64/bin/mingw32-make.exe" -j 4 -f Makefile %ARG%
