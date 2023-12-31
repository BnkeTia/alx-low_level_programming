#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all data(n)
 * @head: a pointer ot the head of the list.
 * Return: sum of all data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
