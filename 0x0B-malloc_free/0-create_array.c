#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars.
 * @size: size of array
 * @c: specific char
 *Return: A pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *)malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}
