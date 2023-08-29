#include "lists.h"
#include <stdio.h>


/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: pointer to the head or first element of the list.
 * Return: numN, number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numN = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		numN++;
		printf("%i\n", h->node_value);
		h = h->next;
		return (numN);

	}

	return (numN);
}

