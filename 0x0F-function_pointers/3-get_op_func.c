#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - check if the operator is valid
 * @s: value input operator
 *
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	/* ops[6][2]*/
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
