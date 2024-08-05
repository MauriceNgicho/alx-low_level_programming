#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t total_elements = 0; /* initialize count */

	while (h != NULL)
	{
		total_elements++;
		h = h->next;
	}

	return (total_elements);
}
