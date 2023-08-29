#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - A function that returns the nth node of a linked list.
 *@index: index of the node
 *@head: pointer to the head of the list.
 *Return: the nth node of the list or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* The node_position keeps track of the index and current node */
	unsigned int node_position = 0;

	/* declaring the current node */
	listint_t *nC = head;

	while (nC != NULL)
	{
		if (node_position == index)
			return (nC);

		nC = nC->next;

		node_position++;
	}
	return (NULL);
}
