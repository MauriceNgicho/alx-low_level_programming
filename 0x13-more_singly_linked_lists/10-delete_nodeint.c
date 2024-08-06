#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index
 *                           in a listint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if successful, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp_mem;
	unsigned int n;

	if (head == NULL || *head == NULL) /*See if list is empty */
	{
		return (-1);
	}
	if (index == 0)
	{
		temp_mem = *head;
		*head = (*head)->next;
		free(temp_mem);
		return (1);
	}
	current = *head;
	for (n = 0; current != NULL && n < index - 1; n++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	temp_mem = current->next;
	current->next = temp_mem->next;
	free(temp_mem);

	return (1);
}
