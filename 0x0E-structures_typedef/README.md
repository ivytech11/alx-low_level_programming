Task 0:
Define a new type called "dog" using a struct that has the following members:

name: a pointer to a character array (string) that holds the name of the dog.
age: a float that holds the age of the dog.
owner: a pointer to a character array (string) that holds the name of the owner of the dog.
After defining the "dog" type, write a program that initializes a "dog" variable with the name "Poppy", age 3.5, and owner "Bob". The program should then print the name and age of the dog.
Task 1:
Write a function called "init_dog" that initializes a "dog" variable using the following parameters:

d: a pointer to the "dog" variable to initialize.
name: a pointer to a character array (string) that holds the name of the dog.
age: a float that holds the age of the dog.
owner: a pointer to a character array (string) that holds the name of the owner of the dog.
After initializing the "dog" variable, the function should do nothing else.
Task 2:
Write a function called "print_dog" that prints the contents of a "dog" variable using the following parameter:

d: a pointer to the "dog" variable to print.
The function should print the name, age, and owner of the dog. If any of these values are NULL, the function should print "(nil)" instead of the value.
Task 3:
Define a new type called "dog_t" using a typedef that is equivalent to the "dog" type from Task 0.

Note: These tasks assume some basic knowledge of C programming, including the use of structs, pointers, and typedefs.
