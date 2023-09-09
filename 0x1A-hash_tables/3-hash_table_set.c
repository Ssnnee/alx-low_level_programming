#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node_to_insert;
	hash_node_t *current_node_collision;

	if (ht == NULL)
		return (0);
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
	current_node_collision = ht->array[index];
	while (current_node_collision != NULL)
	{
		if (strcmp(current_node_collision->key, key) == 0)
		{
			free(current_node_collision->value);
			current_node_collision->value = strdup(value);
			free(node_to_insert->key);
			free(node_to_insert->value);
			free(node_to_insert);
			return (1);
		} current_node_collision = current_node_collision->next;
	}

	node_to_insert->next = ht->array[index];
	ht->array[index] = node_to_insert;
	return (1);
}
