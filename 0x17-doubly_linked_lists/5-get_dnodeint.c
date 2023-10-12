#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a list
 * @head: A pointer to the head of the list
 * @index: index of the node starting from 0
 * Return: nthnode, nth node or NULL if the node doe not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current = 0;
	dlistint_t *nthnode = head;

	if (head == NULL)
		return (NULL);


	while (nthnode != NULL && current < index)
	{
		nthnode = nthnode->next;
		current++;
	}
	return (nthnode);
}
