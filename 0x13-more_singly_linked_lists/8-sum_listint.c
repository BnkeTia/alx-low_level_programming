#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - A function that returns the sum of all data of a linked list.
 * @head: pointer to the head
 * Return: sum of all data or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	do {
		sum += head->n;
		head = head->next;
	} while (head != NULL);

	return (sum);
}
