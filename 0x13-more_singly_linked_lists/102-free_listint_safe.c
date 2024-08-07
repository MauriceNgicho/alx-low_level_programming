#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: double pointer to the head of the list
 *
 * Return: the number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp_mem;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	slow = *h;
	fast = *h;

	while (slow != NULL)
	{
		temp_mem = slow->next;
		free(slow);
		count++;

		if (temp_mem == NULL)
			break;

		slow = temp_mem;

		if (fast != NULL && fast->next != NULL)
			fast = fast->next->next;
		else
			fast = NULL;

		if (slow == fast)
		{
			while (*h != slow)
			{
				temp_mem = (*h)->next;
				free(*h);
				*h = temp_mem;
				count++;
			}
			free(slow);
			*h = NULL;
			break;
		}
	}

	*h = NULL;
	return (count);
}
