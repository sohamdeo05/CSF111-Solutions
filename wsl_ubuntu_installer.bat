@echo off
setlocal enabledelayedexpansion

:: Check for administrator privileges
net session >nul 2>&1
if %ERRORLEVEL% neq 0 (
    echo Requesting administrator privileges...
    powershell Start-Process -FilePath "cmd.exe" -ArgumentList "/c %~dpnx0 %*" -Verb RunAs
    exit /b
)

:WSL_PROMPT
cls
echo Windows Subsystem for Linux (WSL) Installer
echo ------------------------------------------
echo.
set /p "install_wsl=Do you want to install Windows Subsystem for Linux (WSL)? (Y/N): "
if /i "!install_wsl!"=="Y" (
    echo Enabling WSL features...
    dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart
    dism.exe /online /enable-feature /featurename:VirtualMachinePlatform /all /norestart
    wsl --set-default-version 2
    echo.
    echo WSL installation completed. A system restart may be required.
    echo.
) else if /i not "!install_wsl!"=="N" (
    echo Invalid input. Please enter Y or N.
    timeout /t 2 >nul
    goto :WSL_PROMPT
)

:UBUNTU_PROMPT
set /p "install_ubuntu=Do you want to install Ubuntu on WSL? (Y/N): "
if /i "!install_ubuntu!"=="Y" (
    where wsl >nul 2>&1
    if %errorlevel% neq 0 (
        echo WSL command not found. Please reboot and run this script again.
        pause
        exit /b
    )
    echo Installing Ubuntu...
    wsl --install -d Ubuntu
    echo.
    echo Ubuntu installation completed. Please restart your computer when prompted.
    echo.
) else if /i not "!install_ubuntu!"=="N" (
    echo Invalid input. Please enter Y or N.
    timeout /t 2 >nul
    goto :UBUNTU_PROMPT
)

echo Installation process completed.
echo It is recommended to restart your computer to ensure proper functionality.
pause
