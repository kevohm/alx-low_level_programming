#ifndef CALC_H
#define CALC_H

/**
 * struct op - struct op
 * @op - operator
 * @f - The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
