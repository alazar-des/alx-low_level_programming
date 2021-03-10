#include "3-calc.h"

/**
 * get_op_func - return function pointer according input opererator
 * @s: input operator
 *
 * Return: function pointer
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
	static int i;

	if (*ops[i].op != *s)
	{
		i++;
		get_op_func(s);
	}

	return (ops[i].f);
}
