#include "lists.h"
#include <stdio.h>


/**
 * print_list - A function that prints the elements of a linked list
 *@h: pointer to head
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		nodes_num++;
	}
	return (nodes_num);
}
