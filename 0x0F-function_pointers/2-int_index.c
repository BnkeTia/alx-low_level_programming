#include "function_pointers.h"


/**
 * int_index - A function that seraches for an integer
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to be used for value comparison
 * Return: index of first element,-1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int e = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (e < size)
	{
		e++;
		if (cmp(array[e]) != 0)
			return (e);
	}
	return (-1);
}
