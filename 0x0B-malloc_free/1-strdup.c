#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space.
 * @str: pointer to a string
 * Return: returns a pointer to dup(copied) string on success
 */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *copy;

	while (str[size] != '\0')
	{
		size++;
	}

	copy = (char *)malloc((size + 1) * sizeof(char));
	if (copy == NULL)
	{
		for (i = 0; i < 21; i++)
			_putchar("failed to allocate memory\n"[i]);

		return (NULL);
	}

	while (i <= size)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
