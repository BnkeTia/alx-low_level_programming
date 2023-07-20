#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be checked
 * Return: 1 if the character is a digit or 0 for otherwise
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
