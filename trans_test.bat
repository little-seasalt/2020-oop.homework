@echo off 
echo 请输入文件名
set /p b=
C:\Dev-Cpp\MinGW64\bin\gcc %b%.cpp -o trans.exe
if exist trans.exe echo 编译成功
if not exist trans.exe echo 编译失败
pause