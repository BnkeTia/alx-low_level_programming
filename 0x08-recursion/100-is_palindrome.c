#include "main.h"

int check_palindrome(char *s, int start, int end);


#include "main.h"

/**
*_strlen_recursion - A function that returns the length of a string.
*@s: pointer
*Return: the length of a string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
*is_palindrome - A function that checks if a string is a palindrome
*@s: pointer to the string
*Return: 1 (complete)
*/

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - secondary palindrome checker
 * @s: pointer to the string
 * @start: start index of the string
 * @end: end index  of string
 * Return: 1 (complete)
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}
