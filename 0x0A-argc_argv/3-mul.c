#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Description: This program takes two arguments from the command line and
 * multiplies them. If the program does not receive two arguments, it prints
 * "Error" followed by a new line and returns 1. Otherwise, it prints the result
 * of the multiplication followed by a new line. The result of the multiplication
 * can be stored in an integer variable.
 *
 * Return: 0 if successful, 1 otherwise
 */
int main (int argc, char *argv[])
{
	int sum = 1, i = 1;
	int num = argc - 1;

	for (; i < argc; i++)
		sum *= atoi(argv[i]);
	if (num != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", sum);
	return (0);
}
