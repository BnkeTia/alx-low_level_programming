#include "search_algos"

/**
* jump_search - A function that searches for a value in a sorted array
* of integers
* @array: pointer to the array of integers
* @size: number of elements in the array
* @value: integer value to search for.
* Return: Index of the value or -1 if otherwise.
*/

int jumo_search(int *array, size_t size, int value)
{
	size_t down, up;
	size_t jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	for (up = 0; up < 
