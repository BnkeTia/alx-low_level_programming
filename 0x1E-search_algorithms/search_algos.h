#ifndef BISKIT_SEARCH_ALGOS_H
#define BISKIT_SEARCH_ALGOS_H

/* Require standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

/* Data structue definitions */
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* Function prototypes of mandatory tasks */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);


/* Function prototype of advanced tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

/* Function prototypes of helper functions */
size_t min(size_t n1, size_t n2);
int binary_search_2(int *array, int value, size_t low, size_t high);
 int binary_search_3(int *array, int value, size_t low, size_t high);


#endif /* BISKIT_SEARCH_ALGOS_H */
