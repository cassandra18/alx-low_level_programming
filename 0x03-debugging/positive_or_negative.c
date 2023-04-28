#include "main.h"
/**
 * main - Determine if a number is positive , negative or Zero.
 * i: its the number to be checked
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%dd is %s\n", i, "negative");
	}
	else if (i > 0)
        {
                printf("%dd is %s\n", i, "positive");
        }
	else
        {
                printf("%dd is %s\n", i, "zero");
        }
	return;
}
