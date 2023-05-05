
README.md
This repository contains the solutions for four tasks on bit manipulation written in the C programming language.

List of Functions
The following functions are implemented in this project:

0-binary_to_uint.c
Task 0: Binary to Unsigned int Conversion
The goal of this task is to write a function that converts a binary number to an unsigned int. The function should take a string containing a binary number as an argument and return its equivalent unsigned int. If the string contains any characters other than 0 and 1, or if the string is NULL, the function should return 0.
unsigned int binary_to_uint(const char *b);
Arguments:

b: a pointer to a string of 0 and 1 chars.
Return:

the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL
Task 1: Binary Print
The goal of this task is to write a function that prints the binary representation of a number. The function should take an unsigned long integer as an argument and print its binary representation. The format of the output is shown in the example.
Task 2: Get Bit
The goal of this task is to write a function that returns the value of a bit at a given index. The function should take an unsigned long integer n and an index index as arguments, and return the value of the bit at index index.
Task 3: Set Bit
The goal of this task is to write a function that sets the value of a bit to 1 at a given index. The function should take a pointer to an unsigned long integer n and an index index as arguments, and set the value of the bit at index index to 1.
