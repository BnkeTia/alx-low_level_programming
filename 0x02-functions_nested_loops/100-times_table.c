#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with o.
 * @n: The number to generate the times table for.
 */
void print_times_table(int n)
{
	int x;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (x = 0; x <= n; x++)
	{
		print_times_row(x, n);
		_putchar('\n');
	}
}
/**
 * print_times_row - Prints a row of the n times tables.
 * @x: The row number to print.
 * @n: The number of columns (up to x) to print for the row
 */
void print_times_row(int x, int n)
{
	int y, xy;

	for (y = 0; y <= n; y++)
	{
		xy = x * y;
		if (y == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar(' ');
		}
		if (xy < 10)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (xy < 100)
		{
			_putchar(' ');
		}
		if (xy >= 100)
		{
			_putchar((xy / 100) + '0');
		}
		if (xy >= 10)
		{
			_putchar(((xy / 10) % 10) + '0');
		}
		_putchar((xy % 10) + '0');
		if (y < n)
		{
			_putchar(',');
		}
	}
		_putchar('\n');
}
