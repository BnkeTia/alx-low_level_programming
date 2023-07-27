#include "main.h"

/**
*_strncat - A function that concatenates two strings using n bytes from src.
*@src: source string
*@dest: destination string
*@n: number of bytes from source
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int srclen = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		srclen++;
	}

	for (i = 0; i < srclen; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
