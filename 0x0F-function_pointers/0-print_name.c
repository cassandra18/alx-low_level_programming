#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -  a function that prints a name.
 * @name: name to be printed
 * @f: the pointer to the function that prints the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

