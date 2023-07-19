#include <stdio.h>

/**
 * main - prints the sum of all multiplies of 3 or 5 up to 1024
 * Return: Always (success)
 */

int main(void)
{
	int i;
	int y = 0;

	while (i < 1024)
	i++
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	y += i;
	}
	}
	printf("%d\n", y);
	return (0);
}
