#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

/**
 * struct convert - Struct operators
 *
 * @c: Char
 * @f: The function associated
 */
struct convert
{
	char *c;
	void (*f)(va_list, char *);
};
typedef struct convert conver_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
