#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: pointer to a string of binary chars
 * Return: covN, the converted number or 0 .
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int covN = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		covN = covN * 2 + (b[x] - '0');
		x++;
	}

	return (covN);
}
