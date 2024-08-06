#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the head of the list
 *
 * Description: Iterates through the list, frees each node,
 * and sets head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;


	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head; /* save current head */
		*head = (*head)->next; /* move head to next node */
		free(current);
	}
	*head = NULL;
}
