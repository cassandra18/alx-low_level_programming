#include <stdio.h>
#include "main.h"
/*
 * main - prints all the arguments content
 * @argc: count of the arguments supplied to the program
 * @argv: used to refer to an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
while (argc--)
printf("%s", argv++);
return (0);
}
