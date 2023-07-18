#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet 10x in lowercase.
 * Return: 0 (complete)
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 1; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);

		}
		_putchar('\n');

	}

}

