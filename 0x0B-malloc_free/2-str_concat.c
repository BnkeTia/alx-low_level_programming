#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: pointer to the first of the two strings.
 * @s2: pointer to the second string.
 * Return: on success return cat, a pointer to the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int lenA = 0, lenB = 0, a = 0, b = 0;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lenA] != '\0')
		lenA++;
	while (s2[lenB] != '\0')
		lenB++;

	cat = (char *)malloc((lenA + lenB + 1) * sizeof(char));

	if (cat == NULL)
	{
		return (NULL);
	}
	while (a < lenA)
	{
		cat[a] = s1[a];
		a++;
	}
	while (b < lenB)
	{
		cat[a + b] = s2[b];
		b++;
	}
	cat[a + b] = '\0';

	return (cat);
}
