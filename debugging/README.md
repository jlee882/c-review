# Debugging review

## GDB
To install, run `sudo apt install gdb`

## VScode
To enable debugging: 
- go to the run and debug tab
- create a launch.json file
- vscode will popup add debug configuration
- select gdb launch
- add `"miDebuggerPath": "/usr/bin/gdb"` to the configuration
- update `program` field to be the full file path of the executable program (exe file)

To debug, select the launch.json file with the configuration name. Add break points as needed

