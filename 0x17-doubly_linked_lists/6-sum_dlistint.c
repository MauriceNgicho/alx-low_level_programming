#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n; /* Add the value of the current node */
		current = current->next; /* Move to the next node */
	}

	return (sum); /* Return the total sum */
}
