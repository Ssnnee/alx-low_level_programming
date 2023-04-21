#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *ptr;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(str, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
