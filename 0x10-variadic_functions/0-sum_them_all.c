#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - A function that returns the sum of all its parameters
 *@n: number of arguments
 *@...: variable arguments
 *Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (x < n)
	{
		x++;
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
