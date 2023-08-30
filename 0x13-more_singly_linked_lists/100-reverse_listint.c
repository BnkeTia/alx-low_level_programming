#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint_recursive - A support function that reverses a linked list
 * @nC: pointer to the current node.
 * @nP: pointer to the previuos node.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint_recursive(listint_t *nC, listint_t *nP)
{
	listint_t *next;

	if (nC == NULL)
		return (nP);
	next = nC->next;
	nC->next = nP;

	return (reverse_listint_recursive(next, nC));
}

/**
 * reverse_listint - A function that reverses a linked list.
 * @head: pointer to a pointer to a head of the list
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);
	return (reverse_listint_recursive(*head, NULL));
}
