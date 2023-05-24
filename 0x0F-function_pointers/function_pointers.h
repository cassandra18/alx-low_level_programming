#ifndef FUNCTION_HEADERS_H
#define FUNCTION_HEADERS_H
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int (get_op_func(op)(num1, num2);
int op_mod(int a, int b);
int op_add(int a, int b);

#endif /*FUNCTION_HEADERS_H*/
