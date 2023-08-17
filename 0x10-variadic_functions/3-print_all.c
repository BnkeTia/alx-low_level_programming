#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: list of types of arguments to be passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0;
	char *s;

	va_start(args, format);

	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				x++;
				continue;
		}
		if (format[x + 1] != '\0')
			printf(", ");

		x++;
	}

	va_end(args);
	printf("\n");
}
