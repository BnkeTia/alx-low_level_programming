#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - definition of structure singly linked links.
 * @str: pointer to a string
 * @len: length of string
 * @next: pointer to the next node.
 */

struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};

typedef struct list_s list_t;


/* Declaring function prototypes*/
size_t print_list(const list_t *h);

/* prototype for list length*/
size_t list_len(const list_t *h);

/*prototype for add node*/
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);

/*free list*/
void free_list(list_t *head);




#endif /* LISTS_H */
