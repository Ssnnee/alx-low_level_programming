#include <stdio.h>

/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char hex[] = "0123456789abcdef";

for (i = 0; i < 16; i++)
{
putchar(hex[i]);
}
putchar('\n');

return (0);
}

