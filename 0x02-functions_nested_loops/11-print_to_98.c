#include "main.h"
#include <stdio.h>

/**
*print_to_98 - Prints all  natural numbers from n to 98, followed by a new line
*@n: natural number
*Return: void
*/
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x < 98; x++)
			printf("%d, ", x);
	}
	else
	{
		for (x = n; x > 98; x--)
			printf("%d, ", x);
	}

	printf("98\n");
}
