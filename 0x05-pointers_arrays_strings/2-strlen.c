#include "main.h"

/**
 * _strlen - A function that returns the length of string
 * @s: pointer to the string
 * Return: an integer
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
