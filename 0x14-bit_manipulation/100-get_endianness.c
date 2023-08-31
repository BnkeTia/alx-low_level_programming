#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 if big endian or 1 if little endian.
 */

int get_endianness(void)
{
	/* let x be an unsigned integer variable */
	unsigned int x = 1;

	/* assume y as the bytes of the multi byte data type */
	char *y = (char *)&x;

	return (*y == 1);
}
