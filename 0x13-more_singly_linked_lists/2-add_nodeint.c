#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the begining of a list.
 * @head: pointer to the first element of the linked list
 * @n: value to be stored in the new node.
 * Return: neA, the address of the new element or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neA;

	neA = malloc(sizeof(listint_t));

	if (neA == NULL)
		return (NULL);

	neA->node_value = n;
	neA->next = *head;
	*head = neA;

	return (neA);
}
