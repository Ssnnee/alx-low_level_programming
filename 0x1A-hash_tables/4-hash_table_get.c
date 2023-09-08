#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table you want to look into
 * @key: The key to looking for
 *
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_t;

	index = key_index((const unsigned char *)key, ht->size);
	node_t = ht->array[index];

	if (node_t == NULL)
		return (NULL);

	while (node_t != NULL)
	{
		if (strcmp(node_t->key, key) == 0)
			return (node_t->value);
		node_t = node_t->next;
	}

	return (NULL);
}
