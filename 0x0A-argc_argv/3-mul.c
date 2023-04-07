#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main (int argc, char *argv[])
{
	int sum, i, num;
	sum = 1;
	i = 1;
	num = argc - 1;

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
