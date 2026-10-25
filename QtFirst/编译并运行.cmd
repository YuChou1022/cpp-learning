@echo off
setlocal
cd /d "%~dp0"
set "PATH=D:\Qt\bin;%PATH%"
cmake --preset vs2026-x64
if errorlevel 1 goto fail
cmake --build --preset debug --parallel
if errorlevel 1 goto fail
start "" "%~dp0build\Debug\QtFirst.exe"
exit /b 0
:fail
pause
exit /b 1
