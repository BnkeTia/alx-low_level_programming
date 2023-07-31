#include "main.h"

/**
*set_string - A function that set the value of a pointer to a char
*@s: pointer whose value is to be set
*@to: pointer to the char array
*/

void set_string(char **s, char *to)
{
	*s = to;
}
