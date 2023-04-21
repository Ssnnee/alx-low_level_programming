#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_i - prints int
 * @arg: argument of list
 * @separator: separator
 *
 * Retrun: void
 */
void print_i(va_list arg, char *separator)
{
	printf("%s%d", separator, va_arg(arg, int));
}

/**
 * print_c - prints char
 * @arg: argument char
 * @separator: separator
 *
 * Retrun: void
 */
void print_c(va_list arg, char *separator)
{
	printf("%s%c", separator, va_arg(arg, int));
}

/**
 * print_s - prints string
 * @separator: separator
 * @list: list to print
 *
 * Retrun: void
 */
void print_s(va_list list, char *separator)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", separator, s);
}

/**
 * print_f - prints floats
 * @separator: separator
 * @arg: next argument of list to print
 *
 * Retrun: void
 */
void print_f(va_list arg, char *separator)
{
	printf("%s%f", separator, va_arg(arg, double));
}

/**
 * print_all - prints anything.
 * @format: format is list of types of arguments
 *
 * Retrun: void
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i, j;
	char *sep;

	conver_t f_array[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	sep = "";

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *(f_array[j].c))
			{
				f_array[j].f(arg, sep);
				sep = ", ";
			}
			j++;
		}
	}
	printf("\n");
	va_end(arg);
}
