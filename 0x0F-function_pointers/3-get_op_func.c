#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {{"+",op_add},{"-",op_sub},{"*",op_mul},{"/",op_div},{"%",op_mod},{NULL,NULL}};

	while (i < 5)
	{
		if (*s == ops[i][0])
		{       
			get_op_func = ops[i][1];
			return ops[i][1];
		}
	}
	get_op_func =  NULL:
	return NULL:
}
