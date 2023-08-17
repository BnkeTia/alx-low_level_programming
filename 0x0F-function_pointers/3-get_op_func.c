#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: user provided operator
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int e = 0;

	while (ops[e].op)
	{
		if (strcmp(ops[e].op, s) == 0)
			return (ops[e].f);
		e++;
	}

	return (NULL);
}
