#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - A function that prints a linked list safely
 * @head: pointer to the head of the list
 * Return: numN, The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t numN = 0;
	const listint_t *slow, *fast;

	slow = fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		numN++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %i\n", (void *)slow, slow->n);
			exit(98);
		}

	}
	if (fast != NULL)
	{
		numN++;
		 printf("-> [%p] %i\n", (void *)slow, slow->n);
	}

	return (numN);
}
