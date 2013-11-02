@echo off
if "%1"=="" (
	mingw32-make all
	goto :end
	
) else (

	mingw32-make %1 %2 %3

)

:end
