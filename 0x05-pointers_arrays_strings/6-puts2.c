#include "main.h"

/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}

	_putchar('\n');
}
