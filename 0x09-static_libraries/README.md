 Static Libraries 
We created static libraries in the C programming language for this project. At compilation time, a static library is a collection of object files that are linked with and become part of the executable binary file.
Task 0: We created libmy.a, a static library containing the functions listed in the prompt. The ar command was used to create the library, and the nm command was used to list the symbols in the library.
Task 1: We wrote a shell script called create static lib.sh that generated liball.a from all of the C files in the current directory. The ar command was used to create the library, and the ranlib command was used to index it.
It should be noted that the function prototypes The main.h file contains all of the functions found in both libraries.
The project's files can be found in the alx-low level programming repository's 0x09-static libraries directory.
