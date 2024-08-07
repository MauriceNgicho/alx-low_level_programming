#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /*store next node */
		(*head)->next = before; /* Reverse current node pointer */
		before = *head; /*move before to after */
		*head = next; /* move head to next node */
	}

	*head = before;

	return (*head);
}
