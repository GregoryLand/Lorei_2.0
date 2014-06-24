@echo off
::Store args...
set _configName=%1%
set _projectName=%2%

::Remove quotes from remaining args...
set _QTDIR=###%3%###
set _QTDIR=%_QTDIR:"###=%
set _QTDIR=%_QTDIR:###"=%
set _QTDIR=%_QTDIR:###=%

set _OUTDIR=###%4%###
set _OUTDIR=%_OUTDIR:"###=%
set _OUTDIR=%_OUTDIR:###"=%
set _OUTDIR=%_OUTDIR:###=%

::echo %_configName%
::echo %_projectName%
::echo %_QTDIR%
::echo %_OUTDIR%

:: Copy Release Dlls
if %_configName% == Release (
	echo Copying Release Dlls
	@xcopy /q /y "%_QTDIR%\bin\Qt5Widgets.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\Qt5Gui.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\Qt5Core.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\icudt52.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\icuin52.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\icuuc52.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\libEGL.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\libGLESv2.dll" "%_OUTDIR%" > nul
)

:: Copy debug Dlls
if %_configName% == Debug (
	echo Copying Debug Dlls
	@xcopy /q /y "%_QTDIR%\bin\Qt5Widgetsd.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\Qt5Guid.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\Qt5Cored.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\icudt52.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\icuin52.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\icuuc52.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\libEGLd.dll" "%_OUTDIR%" > nul
	@xcopy /q /y "%_QTDIR%\bin\libGLESv2d.dll" "%_OUTDIR%" > nul
)

