#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free.
 * @ptr: pointer to the target memory block
 * @old_size: size of current space for ptr
 * @new_size: new size of the memory block
 * Return: ptr2, pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int x = 0;
	unsigned int dup_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	dup_size = (old_size < new_size) ? old_size : new_size;
	while (x < dup_size)
	{
		*((char *)ptr2 + x) = *((char *)ptr + x);
		x++;
	}
	free(ptr);

	return (ptr2);
}
