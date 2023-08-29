#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: a pointer to a pointer to the head or first element of the list.
 */
void free_listint2(listint_t **head)
{
	/* declaration of the current node that needs to be freed */
	listint_t *nC;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		nC = *head;
		*head = (*head)->next;
		free(nC);
	}
}
