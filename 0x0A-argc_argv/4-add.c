#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
/**
 * is_number - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum, i, num;

	sum = 0;
	i = 1;
	num = argc - 1;

	if (num == 0)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
