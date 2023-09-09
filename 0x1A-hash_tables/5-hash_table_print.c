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
	int first_pair;

	if (ht == NULL)
		return;

	first_pair = 1;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node_t = ht->array[i];

		while (node_t != NULL)
		{
			if (first_pair)
				first_pair = 0;
			else
				printf(", ");
			printf("'%s': '%s'", node_t->key, node_t->value);
			node_t = node_t->next;
		}
	}
	printf("}\n");
}
