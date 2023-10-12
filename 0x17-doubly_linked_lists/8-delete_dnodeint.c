#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node at index
 * @head: a pointer to a pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 on success, -1 if fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (-1);
	}
	for (i = 0; i < index && current; i++)
	{
		current = current->next;
	}

	if (i != index || current == NULL)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
