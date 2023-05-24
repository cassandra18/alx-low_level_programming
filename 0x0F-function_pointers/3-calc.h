#ifndef CALC_H
#define CALC_H
/**
 * struct op - a structure
 * @op: the operator
 * @f: the associated function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} opt_t;

#endif
