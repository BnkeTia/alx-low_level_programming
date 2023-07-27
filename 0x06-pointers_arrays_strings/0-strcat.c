#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclen++;
	}
	for (i = 0; i <= srclen; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
