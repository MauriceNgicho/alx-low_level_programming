#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table
 * @ht: The hash table to look into
 * @key: The key to look for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	/* Check if hash table or key is NULL, or if key is an empty string */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index where the key should be in the hash table */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at this index */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value); /* Key found, return its value */
		}
		current_node = current_node->next;
	}

	/* Return NULL if key not found */
	return (NULL);
}

