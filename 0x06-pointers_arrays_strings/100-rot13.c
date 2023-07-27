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
	int y = 0;
	char alpha1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpharot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; str[x] != '\0'; x++)
	{

		while (alpha1[y] != '\0')
		{
			if (alpha1[y] == str[x])
			{
				str[x] = alpharot13[y];
				break;
			}
			y++;
		}
	}

	return (str);
}

