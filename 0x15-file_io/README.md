README
Task 0: Tread lightly, she is near
This task involves writing a C function that reads a text file and prints it to the standard output according to the POSIX standard. The function read_textfile takes two arguments: filename, which is the name of the file to read, and letters, which is the number of letters the function should read and print. The function returns the actual number of letters it could read and print, and if the file cannot be opened or read, it returns 0. If filename is NULL, the function also returns 0, and if write fails or does not write the expected amount of bytes, the function returns 0.Task 1: Under the snow
This task requires writing a C function that creates a file with the given name and writes the given text content to the file. The function create_file takes two arguments: filename, which is the name of the file to create, and text_content, which is a NULL-terminated string to write to the file. The function returns 1 on success and -1 on failure, and if filename is NULL, it returns -1. If the file already exists, the function truncates it, and if text_content is NULL, the function creates an empty file. The created file must have permissions rw-------.
The second function is called create_file. This function creates a file with the specified name and writes the given content to the file. If the file already exists, the function truncates it. If the file cannot be created or written, the function returns -1. If the function is successful, it returns 1.

Both functions are part of the stdio.h library and operate on files in the local file system. The read_textfile function provides a simple way to read and display the contents of a text file, while the create_file function provides a way to create or overwrite files with the desired permissions and content. These functions are useful for various file manipulation tasks in C programming.
The task is asking you to create a function called append_text_to_file that will append text to the end of a file. The function should take two parameters: filename and text_content.

If the file does not exist, the function should create it. If the function cannot create the file, or if it cannot append the text, the function should return -1. Otherwise, the function should return 1 to indicate success.

The function should follow these guidelines:

The file should be created if it does not exist.
The text should be appended to the end of the file.
If filename is NULL or text_content is NULL, the function should return -1.
The function should not overwrite the file.
The function should return 1 on success and -1 on failure.
To implement this function, you will need to use file I/O functions, such as open, write, and close, from the unistd.h header. You will also need to use the appropriate file 
