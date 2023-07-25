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
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	while (str[start_index] != '\0')
	{
	_putchar(str[start_index]);
		start_index++;
	}

	_putchar('\n');
}

