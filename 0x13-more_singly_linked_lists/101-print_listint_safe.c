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

	while (head != NULL)
	{
		numN++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}

		head = head->next;
	}
	return (numN);
}
