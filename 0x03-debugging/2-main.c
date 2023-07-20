#include <stdio.h>
#include "main.h"

/**
 *main - prints the largest of 3 integers
 *Return: largest_number
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	largest = largest_number(c, b, a);

	printf("%d is the largest number\n", largest);

	return (largest);
}
