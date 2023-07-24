#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 *
 * Return: Length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
