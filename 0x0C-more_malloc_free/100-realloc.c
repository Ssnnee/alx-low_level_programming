#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr = ptr;
	char *tst_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (NULL);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		exit(98);
	tst_ptr = new_ptr;

	/*Coping the contents of the old memory block to the new memory block up*/
	for (i = 0; i < old_size && i < new_size ; i++)
		*tst_ptr++ = *old_ptr++;
	free(ptr);
	return (new_ptr);
}
