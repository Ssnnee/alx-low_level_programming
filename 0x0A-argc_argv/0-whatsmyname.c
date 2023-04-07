#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Description: This program prints the name of the program followed by a new
 * line. The name of the program is stored in the first element of the argv
 * array.
 *
 * Return: 0 if successful
 */
int main (int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
