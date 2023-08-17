#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the fucntion
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list args;


	va_start(args, n);

	while (x < n)
	{
		printf("%i", va_arg(args, int));

		if (separator != NULL && x < (n - 1))
		{
			printf("%s", separator);
		}
		x++;
	}
	va_end(args);

	printf("\n");
}
