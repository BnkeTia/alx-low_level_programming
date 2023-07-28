#include "main.h"
#include <stdio.h>
/**
 * print_buffer - A function that prints a buffer.
 * @b: pointer to a buffer
 * @size: size of buffer
 *Return: null
 */
void print_buffer(char *b, int size)
{
	int x, y, z;
	int c;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (z = 0; z < 10; z++)
		{
			if (z < y)
				printf("%02x", *(b + x + z));
			else
				printf(" ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{
			c = *(b + x + z);
			if (c < 32 || c > 132)
			{
				c = ',';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}
