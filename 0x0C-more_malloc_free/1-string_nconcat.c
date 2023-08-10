#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to the second string
 * @n: number of s2 bytes to concatenate
 * Return: cat, a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenA = 0, lenB = 0, a = 0, b = 0;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lenA] != '\0')
		lenA++;
	while (s2[lenB] != '\0')
		lenB++;

	if (n >= lenB)
		n = lenB;

	cat = (char *)malloc((lenA + n + 1) * sizeof(char));
	if (cat == NULL)
	{
		return (NULL);
	}
	while (a < lenA)
	{
		cat[a] = s1[a];
		a++;
	}
	while (b < n)
	{
		cat[a] = s2[b];
		b++;
		a++;
	}
	cat[a] = '\0';

	return (cat);
}

