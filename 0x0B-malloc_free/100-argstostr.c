#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A funtion that concatenates all arguments of a program.
 * @ac: number of arguments
 * @av: array of pointers to arguments.
 * Return: on succes returns cat, a pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0;
	int len = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;

		len++;
	}

	cat = (char *)malloc((len + 1) * sizeof(char));

	if (cat == NULL)

		return (NULL);

	for (x = 0; x < ac; x++)
	{

		for (y = 0; av[x][y] != '\0'; y++)
		{
			cat[z] = av[x][y];
			z++;
		}
		cat[z] = '\n';
		z++;
	}

	cat[z] = '\0';
	return (cat);
}
