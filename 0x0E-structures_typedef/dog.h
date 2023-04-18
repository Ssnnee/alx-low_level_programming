#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to a character string representing the name of the dog
 * @age: a floating-point value representing the age of the dog in years
 * @owner: a pointer to a character string representing the name
 * of the dog's owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
