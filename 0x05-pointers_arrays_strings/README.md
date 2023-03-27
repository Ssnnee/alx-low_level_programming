Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file

0-reset_to_98.c a function that takes a pointer to an int as parameter and updates the value it points to to 98.
Prototype: void reset_to_98(int *n);

1-swap.c a function that swaps the values of two integers.
Prototype: void swap_int(int *a, int *b);

2-strlen.c a function that returns the length of a string.
Prototype: int _strlen(char *s);

3-puts.c a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);

4-print_rev.c a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);

5-rev_string.c a function that reverses a string.
Prototype: void rev_string(char *s);

6-puts2.c a function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: void puts2(char *str);

7-puts_half.c a function that prints half of a string, followed by a new line.
Prototype: void puts_half(char *str);

8-print_array.c a function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);

9-strcpy.c Prototype: char *_strcpy(char *dest, char *src);
A function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Return value: the pointer to dest
