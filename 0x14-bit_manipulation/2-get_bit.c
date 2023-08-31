#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: value of the bit
 * @index: index of the target bit.
 * Return: value of the bit at index or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
