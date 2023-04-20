#include <stdio.h>
#include "function_pointers.h"
#include"stdlib.h"
/**
 * print_name - prints a name 
 * @name: pointer to the name to be printed
 * @f: pointer to the function that prints the name
 *
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
