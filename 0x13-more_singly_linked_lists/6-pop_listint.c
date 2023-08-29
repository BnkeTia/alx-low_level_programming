#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: a pointer to the pointer to the head of the list
 * Return: n, the data of the head node or 0 if the link is empty.
 */
int pop_listint(listint_t **head)
{
	int n;

	/* declarartion of the current or temporary node */
	listint_t *nC;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	nC = *head;
	*head = (*head)->next;
	free(nC);

	return (n);
}
