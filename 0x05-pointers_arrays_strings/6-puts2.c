#include "main.h"

/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 * Return: void
 */
void puts2(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}

	_putchar('\n');
}
