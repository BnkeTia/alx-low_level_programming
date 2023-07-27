#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (complete)
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			n =  s1[i] - s2[i];
			return (n);
		}
		i++;
	}

	return (0);
}
