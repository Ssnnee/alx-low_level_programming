#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 * @value: The value associated with the key
 *
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node_to_insert;

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node_to_insert = malloc(sizeof(hash_node_t));
	if (node_to_insert == NULL)
		return (0);

	node_to_insert->key = strdup(key);
	node_to_insert->value = strdup(value);
	if (node_to_insert->key == NULL || node_to_insert->value == NULL)
	{
		free(node_to_insert);
		return (0);
	}

	/* Handle collision */
	if (ht->array[index] != NULL)
		node_to_insert->next = ht->array[index];

	/* Insert the node */
	ht->array[index] = node_to_insert;

	return (1);
}
