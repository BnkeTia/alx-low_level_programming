#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints opcodes of its own main function.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (complete)
 */

int main(int argc, char *argv[])
{
	int b, x;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (unsigned char *)main;

	for (x = 0; x < (b - 1); x++)

		printf("%02x ", p[x]);
	printf("%02x\n", p[x]);

	return (0);
}
