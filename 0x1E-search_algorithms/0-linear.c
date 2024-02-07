#include "search_algos.h"

/**
* linear_search - A function that searches for a value in an array of
* integers using the linear search algo
* @array: Pointer to the array of integers
* @value: The value to be searched for.
* @size: The size of the array.
* Return: -1 on failure and the first occurrence when found.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value being compared: %d\n", array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
