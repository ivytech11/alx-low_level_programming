Singly Linked Lists
Overview
In this project, we will be working with singly linked lists in C programming language. The project consists of multiple tasks where we will implement different functions to perform various operations on a linked list.

Description of Tasks
Here is a brief description of each task:

0. Print list
Write a C function print_list that prints all the elements of a linked list_t list. If str is NULL, print [0] (nil).

1. List length
Write a C function list_len that returns the number of elements in a linked list_t list.

2. Add node
Write a C function add_node that adds a new node at the beginning of a linked list_t list.

3. Add node at the end
Write a C function add_node_end that adds a new node at the end of a linked list_t list.

4. Free list
Write a C function free_list that frees a linked list_t list.

Learning Objectives
By the end of this project, we will have learned how to work with singly linked lists, pointers and memory allocation in C programming language.

Requirements
All programs and functions should be compiled with the flags -Wall, -Werror, -Wextra, and -pedantic.

Files
The following files will be created as part of this project:

lists.h: header file containing all function prototypes and data structure definition for the project.
0-print_list.c: function that prints all the elements of a linked list_t list.
1-list_len.c: function that returns the number of elements in a linked list_t list.
2-add_node.c: function that adds a new node at the beginning of a linked list_t list.
3-add_node_end.c: function that adds a new node at the end of a linked list_t list.
4-free_list.c: function that frees a linked list_t list.
Compilation and Execution
To compile the programs, navigate to the directory where the source code files are located and use the following command:
gcc -Wall -Werror -Wextra -pedantic 0-main.c 0-print_list.c -o a

