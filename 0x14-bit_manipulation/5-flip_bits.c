#include "main.h"

/**
 * flip_bits - A function that returns number of bits needed to move to others
 * @n: first or initial number
 * @m: final number or second number.
 * Return: numB, number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numB = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		numB += xor_result & 1;
		xor_result >>= 1;
	}
	return (numB);
}
