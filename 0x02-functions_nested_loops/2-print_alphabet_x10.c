#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet 10x in lowercase.
 *
 * Return: 0 (complete)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);

		}
		_putchar('\n');

	}

}

