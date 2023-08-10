#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers.
 * @min: Minimum value
 * @max: Maximum value
 * Return: a, pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *a;
	int len, val;
	int x = 0;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	a = malloc(len * sizeof(int));
	if (a == NULL)
		return (NULL);

	val = min;

	while (x < len)
	{
		a[x] = val;
		x++;
		val++;
	}

	return (a);
}
