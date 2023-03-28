#include "main.h"
#include <string.h>  // for strlen()
#include <stddef.h>  // for size_t
/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	size_t len = strlen(str);
	size_t n = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
	size_t i;

	for (size_t i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
