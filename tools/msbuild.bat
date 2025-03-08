@Echo off
Echo "Warning: If the obj file has been generated, the compile_commands.json file will be generated."
MSBuild.exe -logger:"%~dp0lib\CompileCommandsJson.dll" %*