#include <stdio.h>
/**
 * main - Point of entry
 * Return: 0 (complete)
 */

int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');

		if (m < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
