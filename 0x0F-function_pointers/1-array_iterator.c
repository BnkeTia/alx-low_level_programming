#include <stdlib.h>

/**
 * array_iterator - A function that executes a function
 * @array: A pointer to array
 * @action: pointer to the function
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e = 0;

	if (array != NULL && action != NULL)
	{
		while (e < size)
		{

			action(array[e]);
			e++;
		}
	}
}
