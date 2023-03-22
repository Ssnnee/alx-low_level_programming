#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
*
* @s: input number as an integer.
*
* Return: last digit.
*/
int print_last_digit(int s)
{
	int l;

	l =  s % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		 _putchar(l + 48);
		 return (l);
	}
}
