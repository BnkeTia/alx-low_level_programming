#include "lists.h"
#include <stdio.h>


/**
 * print_list - A function that prints the elements of a linked list
 *@str: string
 *@len: length of string
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_t = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			_printf("[0] (nil)\n");
		else
			_printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes_t++;
	}
	return (nodes_t);
}
