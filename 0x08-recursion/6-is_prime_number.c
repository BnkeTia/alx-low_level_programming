#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
* is_prime_number - A function that checks if a number is prime
* @n: integer
* Return: integer
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
*check_prime - Checks if a number is prime
*@n: input integer
*@y: reference variable
* Return: 1 for prime number.
*/

int check_prime(int n, int y)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % y == 0 && y > 1)
	{
		return (0);
	}

	if ((n / y) < y)
		return (1);

	return (check_prime(n, y + 1));
}
