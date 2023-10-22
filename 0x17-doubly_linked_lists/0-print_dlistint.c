#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a list.
 * @h: A pointer to the head of the list
 * Return: numN, the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numN = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numN++;
	}

	return (numN);
}
