@echo off 
echo �������ļ���
set /p b=
C:\Dev-Cpp\MinGW64\bin\gcc %b%.cpp -o trans.exe
if exist trans.exe echo ����ɹ�
if not exist trans.exe echo ����ʧ��
pause