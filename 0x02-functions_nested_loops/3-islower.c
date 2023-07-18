#include "main.h"

/**
 * _islower - shows 1 if the input is a lowercase chracter
 * shows 0 if its another case
 *
 * @c: The ASCII code of the character
 *
 * Return: 1 for lowercase character 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
