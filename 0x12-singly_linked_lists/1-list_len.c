#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: A pointer to the head
 * Return: number of elements, numE in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t numE = 0;

	while (h != NULL)
	{
		numE++;

		h = h->next;
	}
	return (numE);
}
