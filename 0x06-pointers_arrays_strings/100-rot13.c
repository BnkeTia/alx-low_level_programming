#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
	int x;
	int y;
	char alpha1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpharot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{

		for (y = 0; y < 52; y++)
		{
			if (str[x] == alpha1[y])
			{
				str[x] = alpharot13[y];
				break;
			}
		}
	}

	return (str);
}

