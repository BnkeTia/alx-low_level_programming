#include <stdio.h>
#include <stdlib.h>

/**
*main - A funtion that prints the minimum number of coins
*@argc: Argument counter
*@argv: Argument vector
*Return: 0 (complete)
*/

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int min_coins = 0;
	int cents;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			min_coins++;
		}
	}

	printf("%d\n", min_coins);

	return (0);
}
