#include "main.h"

/**
 * _memcpy - A function that copies a memory area from src to dest
 * @dest: pointer to the destination of memeory area
 * @src: a pointer to the source of the memory area
 * @n: maximum number of bytes to be copied
 * Return: pointer to the destinatio
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
