#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - A function that multiplies two numbers
 * @str: pointer to a string
 * Return: void
 */

int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - A function that calculate the length of a string
 * @str: input string
 * Return: string length
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _mul - a function that multiplies two intrgers.
 * @num1: first number
 * @num2: second number
 */

void _mul(char *num1, char *num2)
{
	int lenA, lenB, len, a = 0, b = 0;
	int *res;
	int d1, d2;

	lenA = _strlen(num1);
	lenB = _strlen(num2);
	len = lenA + lenB;
	res = calloc(len, sizeof(int));

	if (!res)
	{
		perror("Memory allocation failed");
		exit(1);
	}
	for (a = lenA - 1; a >= 0; a--)
	{
		for (b = lenB - 1; b >= 0; b--)
		{
			d1 = num1[a] - '0';
			d2 = num2[b] - '0';
			res[a + b + 1] += d1 * d2;
			res[a + b] += res[a + b + 1] / 10;
			res[a + b + 1] %= 10;
		}
	}

	while (a < len - 1 && res[b] == 0)
		a++;
	while (a < len)
		printf("%d", res[a++]);
	printf("\n");
	free(res);
}

/**
 * main - point of entry
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 (complete)
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	_mul(argv[1], argv[2]);
	return (0);
}
