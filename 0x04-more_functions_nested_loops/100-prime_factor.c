#include <stdio.h>

/**
 * main - A program that prints the largest prime factor of a given number.
 * Return: void
 */
int main(void)
{
	unsigned long int i = 3, x = 612852475143;

	for (i < 12057; i += 2;)
	{
		while ((x % i == 0) && (x != i))
		{
			x /= i;
		}
	}
	printf("%lu\n", x);
	return (0);
}
