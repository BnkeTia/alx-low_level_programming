#include <stdio.h>
/**
 * main - Point of entry
 * Return: 0 (complete)
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
