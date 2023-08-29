#ifndef LISTS_H
#define LISTS_H

/* standard header files */
#include <stddef.h>
#include <stdio.h>

/* structure definition for linked list */
typedef struct listint_s {
	int node_value;

	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);




#endif /* LISTS_H */
