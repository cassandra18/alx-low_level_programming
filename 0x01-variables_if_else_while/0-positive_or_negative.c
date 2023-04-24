#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main -print whether the number stored in
 *  the variable n is positive or negative
 *  Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		return (is positive);
	}
	else if (n == 0)
	{
		return (is zero);
	}
	else if (n < 0)
	{
		return (is negative);
	}
	return (0);
}
