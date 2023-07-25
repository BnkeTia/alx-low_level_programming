#include "main.h"

/**
 * _strcpy - Copies the string pointed.
 * @dest: Pointer to the destination.
 * @src: Pointer to the source
 *
 * Return: Pointer to the destination.
 */
char *_strcpy(char *dest, const char *src)
{
	int x;

	for (x = 0; src[x] != '0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x++] = '\0';
	return (dest);
}
