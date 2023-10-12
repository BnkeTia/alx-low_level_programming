#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: Integer value of the new node.
 * Return: newA, address of the new element or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newA;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	newA = malloc(sizeof(dlistint_t));
	if (newA == NULL)
		return (NULL);

	newA->n = n;
	newA->next = NULL;

	if (*head == NULL)
	{
		newA->prev = NULL;
		*head = newA;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newA;
		newA->prev = temp;
	}
	return (newA);
}
