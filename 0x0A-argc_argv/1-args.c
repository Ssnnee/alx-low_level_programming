#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Description: This program prints the number of arguments passed to the
 * program followed by a new line. The number of arguments is calculated by
 * subtracting 1 from the value of argc.
 *
 * Return: 0 if successful
 */
int main (int argc, char *argv[])
{
	int num = argc - 1;

	printf("%d\n", num);
	return (0);
}
