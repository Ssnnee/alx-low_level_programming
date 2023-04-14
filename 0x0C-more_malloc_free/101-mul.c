#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
/**
 * _puts - prints a string to the standard output
 * @s: pointer to the null-terminated string to
 * be printed
 *
 * Return: void
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * is_digit - checks if a string contains only digits
 * @s: pointer to the first character of the string
 * to check
 *
 * Return: 1 if the string contains only digits, 0
 * otherwise
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
 * _atoi - converts a string of digits to an integer
 * @s: pointer to the first character of the string
 * to convert
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int res, i;

	res = 0;
	for (i = 0; s[i]; i++)
		res = res * 10 + s[i] - '0';
	return (res);
}
/**
 * print_int - prints an integer to the standard output
 * @n: the integer to print
 *
 * Return: void
 */
void print_int(int n)
{
	if (n >= 10)
		print_int(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * multiply - multiplies two large integers
 * represented as arrays of digits
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * @len_a: length of the first integer
 * @len_b: length of the second integer
 *
 * Return: pointer to the result of the multiplication
 */
int *multiply(int *a, int *b, int len_a, int len_b)
{
	int *res, i, j, carry;

	res = malloc(sizeof(int) * (len_a + len_b));

	for (i = 0; i < (len_a + len_b); i++)
		res[i] = 0;
	for (i = 0; i < len_a; i++)
	{
		for (j = 0; j < len_b; j++)
		{
			res[i + j] += a[i] * b[j] + carry;
			carry = res[i + j] / 10;
			res[i + j] %= 10;
		}
		if (carry)
			res[i + j] += carry;
	}
	return (res);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 98 if failure
 */
int main(int argc, char **argv)
{
	int i, len_a, len_b, *a, *b, *res;
	char *s1, *s2;

	s1 = argv[1];
	s2 = argv[2];

	while (*s1++)
		len_a++;
	while (*s2++)
		len_b++;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		_puts("Error");
		exit(98);
	}

	a = malloc(sizeof(int) * len_a);
	b = malloc(sizeof(int) * len_b);

	s1 = argv[1], s2 = argv[2];

	for (i = 0; i < len_a; i++)
		a[i] = *(s1 + len_a - i - 1) - '0';
	for (i = 0; i < len_b; i++)
		b[i] = *(s2 + len_b - i - 1) - '0';

	res = multiply(a, b, len_a, len_b);

	i = len_a + len_b - 1;

	while (i > 0 && res[i] == 0)
		i--;
	for (; i >= 0; i--)
		_putchar(res[i] + '0');
	_putchar('\n');
	free(a);
	free(b);
	free(res);
	return (0);
}
