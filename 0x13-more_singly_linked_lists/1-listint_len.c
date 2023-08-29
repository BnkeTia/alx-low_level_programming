#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in linked list.
 * @h: pointer to the head or first element of the linked list.
 * Return: numE, number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t numE = 0;

	while (h != NULL)
	{
		numE++;

		h = h->next;
	}

	return (numE);
}
