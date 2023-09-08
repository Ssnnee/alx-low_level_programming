#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int new_hash;
	int c;

	new_hash = 5381;
	while ((c = *str++))
	{
		new_hash = ((new_hash << 5) + new_hash) + c; /* hash * 33 + c */
	}
	return (new_hash);
}
