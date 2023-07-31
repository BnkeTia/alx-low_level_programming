#include "main.h"

/**
 * _strchr - A function that locates a charcter in a string
 * @s: pointer to the string
 * @c: character to be located
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
