#include "main.h"

/**
*factorial - A function that gets the factotial of a given number
*@n: integer or number
*Return: 1 success
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
