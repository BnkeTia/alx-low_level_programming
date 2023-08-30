#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint_recursive - A function that reverses a linked list
 * @nC: pointer to the current node.
 * @nP: pointer to the previuos node.
 * Return: A pointer to the furst node of the reversed list.
 */
listint_t *reverse_listint_recursive(listint_t *nC, *nP)
{
	listint_t *next;

	if (nC == NULL)
		return (nP);
	next = nC->next;
	nC->next = nP;

	return (reverse_listint_recursive(next, nC);
}
