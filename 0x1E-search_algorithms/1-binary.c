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
	int front, back, i, mid;

	if (array == NULL)
		return (-1);

	back = 0;
	front = size - 1;

	while (back <= front)
	{
		printf("Searching subarray: ");
		for (i = back; i <= front; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		mid = back + (front - back) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			back = mid + 1;
		else
			front = mid - 1;
	}
	return (-1);
}
