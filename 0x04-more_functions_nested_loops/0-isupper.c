#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @x: the character to be checked
 * Return: 1 if x is uppercase Returns 0 otherwise
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
