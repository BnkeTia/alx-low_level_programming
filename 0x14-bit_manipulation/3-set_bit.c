#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: pointer to the value of the index
 * @index: index of the target bit.
 * Return: 1 if succes or -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
