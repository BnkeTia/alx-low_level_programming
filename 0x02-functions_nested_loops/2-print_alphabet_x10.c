#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet 10x in lowercase.
 * Return: 0 (complete)
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 'a'; y <= 'z';y++)
	{
		for (y = 1; x <= 10; x++)
		{
			_putchar(y);

		}
		_putchar('\n');

	}

}

