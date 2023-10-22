#include "lists.h"

/**
 * insert_dnodeint_at_index - A function tha inserts a new node in a list
 * @h: A pointer to a pointer to the head of the list
 * @idx: index where new node should be added
 * @n: integer value of new node
 * Return: newA, address of the new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newA, *current = *h;
	unsigned int i;

	newA = malloc(sizeof(dlistint_t));
	if (newA == NULL)
		return (NULL);

	newA->n = n;

	if (idx == 0)
	{
		newA->prev = NULL;
		newA->next = current;
		if (current)
			current->prev = newA;
		*h = newA;
		return (newA);
	}
	for (i = 0; i < idx - 1 && current; i++)
	{
		current = current->next;
	}
	if (i != idx - 1)
	{
		free(newA);
		return (NULL);
	}
	newA->next = current->next;
	newA->prev = current;
	if (current->next)
		current->next->prev = newA;
	current->next = newA;
	return (newA);
}
