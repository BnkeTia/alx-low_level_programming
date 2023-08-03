#include "main.h"

/**
 * wildcmp - Afunction that compares two strings
 * @s1: Firts of the two strings to be compared
 * @s2: second of the two strings
 * Return: 1 if strings are identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		if (wildcmp(s1 + 1, s2 + 1) || wildcmp(s2 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}
	return (0);
}
