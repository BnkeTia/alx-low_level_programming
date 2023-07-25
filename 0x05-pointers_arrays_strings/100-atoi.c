#include "main.h"

/**
 *_atoi - Converts a string to an integer.
 *@s: Pointer to the string to be converted.
 *
 *Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int z = 0;
	int min = 1;
	int isi = 0;

	while (s[i])
	{
	if (s[i] == 45)
	{
	min *= -1;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
	isi = 1;
	z = (z * 10) + (s[i] - '0');
	i++;
	}
	if (isi == 1)
	{
	break;
	}
	i++;
	}
	z *= min;
	return (z);
}
