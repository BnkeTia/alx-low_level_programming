#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the start of a list
 * @head: A pointer to pointer to the head of the list.
 * @n: Integer value of the new node
 * Return: newA, address of the new node on success or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newA = malloc(sizeof(dlistint_t));

	if (newA == NULL)
		return (NULL);

	newA->n = n;
	newA->prev = NULL;
	newA->next = *head;

	if (*head != NULL)
		(*head)->prev = newA;

	*head = newA;
	return (newA);
}
