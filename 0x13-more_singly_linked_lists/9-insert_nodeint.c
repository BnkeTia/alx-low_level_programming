#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts a node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: new node value
 * Return: neA, address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *neA;
	listint_t *nC;

	if (head == NULL)
		return (NULL);

	neA = malloc(sizeof(listint_t));
	if (neA == NULL)
		return (NULL);
	neA->n = n;
	if (idx == 0)
	{
		neA->next = *head;
		*head = neA;
		return (neA);
	}
	nC = *head;
	for (x = 0; x < (idx - 1); x++)
	{
		if (nC == NULL)
		{
			free(neA);
			return (NULL);
		}
		nC = nC->next;
	}
	if (nC == NULL)
	{
		free(neA);
		return (NULL);
	}
	neA->next = nC->next;
	nC->next = neA;
	return (neA);
}
