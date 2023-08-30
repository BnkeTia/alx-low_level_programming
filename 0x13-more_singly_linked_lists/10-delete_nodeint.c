#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at the index
 * @index: index of the node that should be deleted
 * @head: pointer to a pointer to the head of the list
 * Return: 1 if succeeded or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *neA;
	unsigned int numN;
	listint_t *nC;
	listint_t *nP;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		neA = *head;
		*head = (*head)->next;
		free(neA);
		return (1);
	}
	nC = *head;
	nP = NULL;
	numN = 0;

	while (nC != NULL && numN < index)
	{
		nP = nC;
		nC = nC->next;
		numN++;
	}
	if (nC == NULL)
		return (-1);
	nP->next = nC->next;
	free(nC);

	return (1);
}
