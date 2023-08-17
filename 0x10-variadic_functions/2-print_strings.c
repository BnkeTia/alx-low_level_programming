#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings folowed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	char *s;

	va_start(args, n);

	while (x < n)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && x < (n - 1))
			printf("%s", separator);
		x++;
	}

	va_end(args);
	printf("\n");
}
