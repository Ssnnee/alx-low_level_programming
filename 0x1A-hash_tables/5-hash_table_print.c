#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node_t;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node_t = ht->array[i];

		if (node_t == NULL)
			return;
		while (node_t != NULL)
		{
			printf("'%s': '%s', ", node_t->key, node_t->value);
			node_t = node_t->next;
			if (node_t != NULL)
				printf(", ");
		}
	}

	printf("}\n");
}
