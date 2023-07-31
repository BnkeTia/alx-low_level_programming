#include "main.h"

/**
 * _strstr - A function that locates a substring in the main string
 * @haystack: pointer to the input string
 * @needle: pointer to the substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
