#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Description: Prints the key/value pairs in the order they appear in
 * the array of the hash table. If the hash table is NULL, prints nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int first_pair = 1; /* Flag to handle commas between pairs */

	/* If the hash table is NULL, do nothing */
	if (ht == NULL)
		return;

	/* Start printing the opening curly brace */
	printf("{");

	/* Loop through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		/* Traverse the linked list at this index */
		while (current_node != NULL)
		{
			/* Print comma if it's not the first key/value pair */
			if (first_pair == 0)
				printf(", ");

			/* Print the key/value pair */
			printf("'%s': '%s'", current_node->key, current_node->value);
			first_pair = 0; /* After printing the first pair, set flag to 0 */

			current_node = current_node->next; /* Move to the next node */
		}
	}

	/* Finish by printing the closing curly brace */
	printf("}\n");
}
