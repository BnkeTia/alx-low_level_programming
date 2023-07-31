#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: pointer to a substring
 *@accept: pointer to bytes from accept
 *Return: number of bytes in inital segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, n, z;

	n = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		z = 0;

		for (n = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				n++;
				z = 1;
			}
		}
		if (z == 0)
			return (n);
	}
	return (n);

}
