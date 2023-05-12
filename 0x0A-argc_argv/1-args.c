#include <stdio.h>
#include "main.h"
/*
 * main -  a program that prints the number of arguments passed into it.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	
	while ( i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}

	return (0);
}       
