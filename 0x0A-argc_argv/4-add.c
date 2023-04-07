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
 * Description: This program takes any number of arguments from the command
 * line and adds them. If one of the numbers contains symbols that are not
 * digits, it prints "Error" followed by a new line and returns 1. Otherwise,
 * it prints the result of the addition followed by a new line. The result of
 * the addition can be stored in an integer variable.
 *
 * Return: 0 if successful, 1 otherwise
 */
int main (int argc, char *argv[])
{
	int sum = 0, i = 1;
	int num = argc - 1;

	for (; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (0);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
