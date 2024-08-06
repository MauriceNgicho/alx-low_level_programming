#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *               and returns the head node's data (n)
 * @head: double pointer to the head of the list
 *
 * Return: the data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_mem;
	int i; /*store data from head */

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp_mem = *head; /* Save the current head node */
	i = temp_mem->n; /* Save the data from the head node */
	*head = (*head)->next; /* Move the head to the next node */
	free(temp_mem);

	return (i);
}
