#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - A function that returns the no_ of elements in a linked list
 * @h: pointer to the head of the list
 * Return: numE, number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize number of elements to zero */
	size_t numE = 0;

	while (h != NULL)
	{
		numE++;
		h = h->next;
	}

	return (numE);
}
