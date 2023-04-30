This README file provides an overview of the tasks to be completed in the 0x13-more_singly_linked_lists directory of the alx-low_level_programming repository. The tasks involve creating functions that operate on singly linked lists. The tasks and their descriptions are as follows:

Task 0: Print list
Write a function print_listint that takes a singly linked list of integers as input and prints all the elements of the list, one element per line. The function should return the number of nodes in the list.

Task 1: List length
Write a function listint_len that takes a singly linked list of integers as input and returns the number of elements in the list.

Task 2: Add node
Write a function add_nodeint that takes a pointer to the head of a singly linked list of integers and an integer as input, and adds a new node at the beginning of the list with the given integer. The function should return the address of the new element, or NULL if it failed.

Task 3: Add node at the end
Write a function add_nodeint_end that takes a pointer to the head of a singly linked list of integers and an integer as input, and adds a new node at the end of the list with the given integer. The function should return the address of the new element, or NULL if it failed.

Task 4: Free list
Write a function free_listint that takes a singly linked list of integers as input and frees all the nodes of the list.

Task 5: Free
Write a function free_listint2 that takes a pointer to the head of a singly linked list of integers as input and frees all the nodes of the list. The function should set the head to NULL.

Task 6: Pop
Write a function pop_listint that takes a pointer to the head of a singly linked list of integers as input, removes the head node of the list, and returns the integer value of the head node.

Task 7: Get node at index
Write a function get_nodeint_at_index that takes a pointer to the head of a singly linked list of integers and an index as input, and returns the node at the given index. If the index is not valid, the function should return NULL.

Task 8: Sum list
Write a function sum_listint that takes a singly linked list of integers as input and returns the sum of all the integers in the list.

Task 9: Insert
Write a function insert_nodeint_at_index that takes a pointer to the head of a singly linked list of integers, an index, and an integer as input, and inserts a new node with the given integer at the given index. If the index is not valid, the function should return NULL.

Task 10: Delete at index
Write a function delete_nodeint_at_index that takes a pointer to the head of a singly linked list of integers and an index as input, and deletes the node at the given index. If the index is not valid, the function should return NULL.
Task 11:

The task requires you to write a function that will reverse a singly linked list in place. The function should take a pointer to a pointer to the first node of the linked list as an argument and return a pointer to the first node of the reversed list.

In order to reverse the linked list, you will need to manipulate the pointers of each node. You will need to start by setting a pointer to the first node and a pointer to the next node. Then you will need to loop through the linked list, setting each node's pointer to the next node's pointer, until you reach the end of the list. Finally, you will need to set the head pointer to the last node in the list.

Task 12:

The task requires you to write a function that will print a singly linked list, but will also detect loops in the list. The function should take a pointer to the first node of the linked list as an argument and return the number of nodes in the list.

To detect loops in the linked list, you can use Floyd's cycle-finding algorithm. This algorithm uses two pointers to traverse the list: a slow pointer that moves one node at a time, and a fast pointer that moves two nodes at a time. If there is a loop in the list, the fast pointer will eventually catch up to the slow pointer, indicating the presence of a loop. Once you detect a loop, you should exit the program with status 98. If there is no loop, you can simply print the list as usual.





