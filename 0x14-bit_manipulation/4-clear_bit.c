#include "main.h"

/**
 * clear_bit - A function tha sets the value of a bit to zero at a given index
 * @n: pointer to the value
 * @index: index of the target bit
 * Return: 1 on succes or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
