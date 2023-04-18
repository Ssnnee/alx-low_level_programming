#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 *
 * Return: a pointer to the newly created dog_t
 * structure, or NULL if the
 * function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len, len2, i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		printf("Error: Failed to allocate memory for new dog.\n");
		exit(1);
	}

	len = 0, len2 = 0;

	while (name[len++])
		;
	while (owner[len2++])
		;

	new_dog->name = malloc(len * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	new_dog->owner = malloc(len2 * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= len2; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
