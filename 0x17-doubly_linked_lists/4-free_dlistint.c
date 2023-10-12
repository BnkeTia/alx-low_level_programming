#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list.
 * @head: A pointer to the head of the list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *my_list;

	while (head != NULL)
	{
		my_list = head;
		head = head->next;
		free(my_list);
	}
}
