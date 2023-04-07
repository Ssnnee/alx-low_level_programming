#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments passed to the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Description: This program prints all arguments passed to the program, one
 * per line. It does this by using a for loop to iterate over the elements of
 * the argv array and printing each element followed by a new line.
 *
 * Return: 0 if successful
 */
int main (int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
