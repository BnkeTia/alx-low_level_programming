#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list.
 * @head: pointer to the head or first element of the linked list.
 */
void free_listint(listint_t *head)
{
	/* declaration of the current node that needs to be freed */
	listint_t *nC;

	while (head != NULL)
	{
		nC = head;
		head = head->next;
		free(nC);

	}
}
