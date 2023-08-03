#include "main.h"

/**
*sqrt2 - A function that fascilitate movement from 1 to n
*@a: same number as n
*@b: number that moves from 1 to n
*Return: 1 (completed)
*/
int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}

	else if (b * b > a)
	{
		return (-1);
	}

	return (sqrt2(a, b + 1));
}
/**
*_sqrt_recursion - A function that returns the natural square root of n
*@n: Integer
*Return: natural square.
*/

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
