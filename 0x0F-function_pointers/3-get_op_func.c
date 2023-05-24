#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform the operation asked by
 * the user
 * @s: the operator
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}
		      , {"%", op_mod}, {NULL, NULL}};

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
