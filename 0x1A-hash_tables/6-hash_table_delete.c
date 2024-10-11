#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table and frees all allocated memory.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	/* Loop through each index of the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i]; /* Access each linked list at this index */

		/* Traverse the linked list at this index and free all nodes */
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);    /* Free the key */
			free(node->value);  /* Free the value */
			free(node);         /* Free the node itself */
			node = temp;        /* Move to the next node */
		}
	}

	/* Free the array of the hash table */
	free(ht->array);

	/* Free the hash table structure */
	free(ht);
}

