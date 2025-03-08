@Echo off
Echo "Warning: If the obj file has been generated, the compile_commands.json file will be generated."
MSBuild.exe -logger:"C:\Users\y\Develop\qt-demo\tools\lib\CompileCommandsJson.dll" %*