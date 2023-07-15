#include <stdio.h>
/**
 * main - Point of entry
 * Return: 0 (completed)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x != y && x < y)
			{
				putchar(x + '0');
				putchar(y + '0');

				if (x < 8 && y <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
