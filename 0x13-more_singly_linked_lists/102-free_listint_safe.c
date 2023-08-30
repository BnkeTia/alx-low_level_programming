#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a linked list
 * @h: pointer to the pointer of the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *nC, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	nC = *h;
	while (nC != NULL)
	{
		size++;
		tmp = nC;
		nC = nC->next;
		free(tmp);

		if (nC == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (size);
}
