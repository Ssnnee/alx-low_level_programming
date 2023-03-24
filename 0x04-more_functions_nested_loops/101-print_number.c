#include "main.h"

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/
void print_number(int n)
{
	int digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -digit;
	}

	int divisor = 1;

	while (digit / divisor > 9)
		divisor *=10;

	while (divisor != 0)
	{
		_putchar((digit / divisor) + '0');
		digit %= divisor;
		divisor /= 10;
	}
}
