#ifndef LISTS_H
#define LISTS_H

/* standard header files */
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - defines the structure of the linked list.
 * @node_value: integer field that hold the value of a node in the list.
 * @next: pointer to the next element in the linked list.
 */
typedef struct listint_s
{
	int node_value;

	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);




#endif /* LISTS_H */