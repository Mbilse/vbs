@echo on
cd /
title System Setup Utility
pause
echo 正在启动...
timeout /t 1 /nobreak >nul
pause
cls
title 欢迎
timeout /t 2 /nobreak >nul
cls
title System UI
set /p input="
a:
b:
c:

请输入功能： "
if "%input%"=="a" (
    echo 执行代码A
) else if "%input%"=="b" (
    echo 执行代码B
) else if "%input%"=="c" (
    echo 执行代码C
) else (
    echo '%input%'是未知功能,我们无法执行这个功能
    pause
    )
pause
