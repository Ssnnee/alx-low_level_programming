#include "hash_tables.h"
/**
 * hash_table_print - Deletes a hash table.
 * @ht: The hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node_t;
	hash_node_t *next_node;

	for (i = 0; i < ht->size; i++)
	{
		node_t = ht->array[i];
		while (node_t != NULL)
		{
			/*Store the next node in next_node(temp) before freeing. */
			next_node = node_t->next;
			free(node_t->key);
			free(node_t->value);
			free(node_t);
			node_t = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
