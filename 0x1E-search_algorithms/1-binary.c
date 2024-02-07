#include "search_algos.h"

/**
* binary_search - A function that searches for a value in sorted array
* of integers using Binary search algo
* @array: Pointer to the array
* @size: size of array or number of elements in the array.
* @value: value to be searched for
* Return: The index of first occurrence or -1 on failure
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching subarray: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
