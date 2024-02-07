#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value in a sorted
 * int array
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to be searched ofr
 * Return: Index of value, -1 if otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (array == NULL)
		return (-1);

	low = 0, high = size - 1;

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	mid = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", mid);
	return (-1);
}
