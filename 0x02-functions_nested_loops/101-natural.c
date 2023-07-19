#include <stdio.h>

/**
 * main - prints the sum of all multiplies of 3 or 5 up to 1024
 * Return: Always (success)
 */
int main(void)
{
	int x;
	int sum = 0;

	for (int x = 3; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
