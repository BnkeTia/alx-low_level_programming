#include "main.h"

/**
 *times_table - Prints the 9 times table.
 *
 *Return: void
 */
void times_table(void)
{
	int x, y, xy;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			xy = x * y;
			if (y != 0)
			{
				_putchar(',');
				if (xy < 10)
				_putchar(' ');
			}
			if (xy >= 10)
			{
				_putchar(' ');
				_putchar(xy / 10 + '0');
				_putchar(xy % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(xy + '0');
			}
		}
		_putchar('\n');
	}
}
