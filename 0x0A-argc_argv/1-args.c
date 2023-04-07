#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int num;

	num = argc - 1;

	printf("%d\n", num);
	return (0);
}
