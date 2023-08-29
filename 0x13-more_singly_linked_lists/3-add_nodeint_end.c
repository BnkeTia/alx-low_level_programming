#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a new node at the end of a list.
 * @head: pointer to a pointer to the first element in the list.
 * @n: node value
 * Return: neA, address of the new element or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*new node or address of the new node */
	listint_t *neA;

	/* current node */
	listint_t *nC;

	neA = malloc(sizeof(listint_t));

	if (neA == NULL)
		return (NULL);

	neA->n = n;
	neA->next = NULL;

	if (*head == NULL)
	{
		*head = neA;
		return (neA);
	}

	nC = *head;
	while (nC->next != NULL)
	{
		nC = nC->next;
	}
	nC->next = neA;

	return (neA);
}
