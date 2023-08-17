#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - A function that determines the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that determines the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that finds the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that finds the ratio of two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
{
		printf("Error\n");
		exit(100);
}
		return (a / b);
}

/**
 * op_mod - A function that calculates the remainder of a division operation
 * @a: first integer
 * @b: second integer
 * Return: solution to the operation (a % b)
 */

int op_mod(int a, int b)
{
	if (b == 0)
{
		printf("Error\n");
		exit(100);
}
		return (a % b);
}
