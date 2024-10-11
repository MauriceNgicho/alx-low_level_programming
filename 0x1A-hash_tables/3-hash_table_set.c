#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_node - Creates a new hash node
 * @key: The key for the hash node (must be duplicated)
 * @value: The value for the hash node (must be duplicated)
 *
 * Return: The new node or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;
	char *key_copy, *value_copy;

	key_copy = strdup(key);
	if (key_copy == NULL)
		return (NULL);

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		return (NULL);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (NULL);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: The hash table
 * @key: The key, which cannot be an empty string
 * @value: The value associated with the key. The value will be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *new_node;

	/**
	 * Check if the hash table, key, or value is NULL
	 * or if the key is an empty string
	 */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Get the index for the key using the key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the table and update its value */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);  /* Free the old value */
			current_node->value = strdup(value);  /* Update with the new value */
			return (1);
		}
		current_node = current_node->next;
	}

	/* If the key does not exist, create a new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	/* Insert the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
