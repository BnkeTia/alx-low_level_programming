#include <stdio.h>
/**
 * main - Point of entry
 * Return: 0 (complete)
 */

int main(void)
{

	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x != 113 && x != 101)
		{
			putchar(x);
		}

	}


	putchar('\n');

	return (0);
}
