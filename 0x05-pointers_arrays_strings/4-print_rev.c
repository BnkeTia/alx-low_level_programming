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
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int x;

	for (x = len - 1; x >= 0; x--)
	{
	_putchar(s[x]);
	}
	_putchar('\n');
}
