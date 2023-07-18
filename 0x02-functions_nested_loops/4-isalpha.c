#include "main.h"

/**
 * _isalpha - Shows 1 if the input is a letter, loercase or uppercase
 *
 * @c: The ASCII code of the character
 *
 * Return: 1 for letters. 0 for others.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
