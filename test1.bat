@echo off 
echo �������ļ���
set /p b=
C:\Dev-Cpp\MinGW64\bin\gcc %b%.cpp -o x.exe
if exist x.exe echo ����ɹ�
if not exist x.exe echo ����ʧ��
pause
