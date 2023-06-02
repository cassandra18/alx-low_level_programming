#include "lists.h"
/**
 *constructor - the constructor attribute is used to automatically execute
 *a function before the main function
 *
 * Return: nothing
 */
void __attribute__((constructor)) print_text(void);

/**
 * print_text - prints text before the main function
 * is executed
 * Return: nothing
 */
void print_text(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
