Files
libdynamic.so: Dynamic library file containing the listed functions.
main.h: Header file with the prototypes of the functions.
Task 1: Without libraries, what have we? We have no past and no future
Description
Create a script 1-create_dynamic_lib.sh that generates a dynamic library named liball.so from all the .c files in the current directory.

Files
liball.so: Dynamic library file containing all the functions from the .c files in the directory.
1-create_dynamic_lib.sh: Script to generate the dynamic library.
Task 2: Let's call C functions from Python
Description
Create a dynamic library named 100-operations.so that contains C functions which can be called from Python. These functions should be used to perform various arithmetic operations. A Python script, 100-tests.py, is provided to demonstrate the usage of these functions.

Files
100-operations.so: Dynamic library file containing C functions for arithmetic operations.
100-tests.py: Python script that calls the C functions from the dynamic library.
Task 3: Code injection: Win the Giga Millions!
Description
In this task, the goal is to create a shell script that can be run on the same server where the Giga Millions program is executed. The objective is to modify the execution environment in such a way that the user wins the jackpot.

A copy of the Giga Millions program, gm, is provided, along with some additional information and restrictions. The script should be a maximum of three lines and can only run two commands. The following constraints apply:

The script should not modify the gm program.
The script should be run as the mss user on the server, 98 seconds before the gm program is executed with specific numbers.
The mss user has limited permissions and can only upload one file.
The script should remove itself after execution and leave no trace in the command history.
Files
101-make_me_win.sh: Shell script to be run on the server to manipulate the execution environment and.




