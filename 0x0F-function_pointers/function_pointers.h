#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));


/* Afunction that executes a function given as a parameter */
void array_iterator(int *array, size_t size, void (*action)(int));

/* A function that searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));


int (*get_op_func(char *s))(int, int);



#endif /* FUNCTION_POINTERS_H */
