#include "main.h"

/**
 * _strpbrk - A function that searches a string for any set of bytes
 * @s: Pointer to the input string.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}

