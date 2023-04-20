Readme for "Variadic Functions" task
In C programming, variadic functions refer to functions that accept a variable number of arguments. The header file stdarg.h contains macros and type declarations for this type of function. Variadic functions are useful when the number of arguments to be passed to a function is unknown or variable.

Files
0-sum_them_all.c - a function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0.
1-print_numbers.c - a function that prints numbers, followed by a new line.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
If separator is NULL, don’t print it.
Print a new line at the end of the function.
2-print_strings.c - a function that prints strings, followed by a new line.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
If separator is NULL, don’t print it.
If one of the string is NULL, print (nil) instead.
Print a new line at the end of the function.
3-print_all.c - a function that prints anything.
Prototype: void print_all(const char * const format, ...);
format is a list of types of arguments passed to the function.
c : char
i : integer
f : float
s : char * (if the string is NULL, print (nil) instead.
Any other character should be ignored.
You are not allowed to use for, goto, ternary operator, else, do ... while.
You can use a maximum of 2 while loops and 2 if statements.
You can declare a maximum of 9 variables.
You are allowed to use printf.
Print a new line at the end of the function.
Compilation
All files will be compiled using gcc 4.8.4 on Ubuntu 14.04 LTS. The code will be compiled using flags -Wall, -Werror, -Wextra, and -pedantic.

Example Usage
0-sum_them_all.c
