#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0; /* to count the node */

	while (h != NULL)
	{
		printf("%d\n", h->n); /* print the value of current node */
		h = h->next; /* move to next node */
		counter++;
	}
	return (counter);
}
