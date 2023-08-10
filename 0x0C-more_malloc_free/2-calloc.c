#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc.
 * @nmemb: elements of the array.
 * @size: size of elemnt in byte(s)
 * Return: m, a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)

		return (NULL);

	m = malloc(nmemb * size);
	if (m == NULL)
	{
		return (NULL);
	}
	while (a < nmemb * size)
	{
		*((char *)m + a) = 0;

		a++;
	}

	return (m);
}

