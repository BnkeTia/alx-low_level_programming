#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A function that prints the sum of positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (complete)
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int pn, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			c = argv[x];

			for (pn = 0; pn < strlen(c); pn++)
			{
				if (c[pn] < 48 || c[pn] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
