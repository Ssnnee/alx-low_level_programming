#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sum all arguements
 * @n: number of arguements
 *
 * Return: 0 if n equal to  0 or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	return (sum);
	va_end(num);
}
