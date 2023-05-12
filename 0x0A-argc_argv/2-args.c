#include <stdio.h>
/*
 * main -  a program that prints the number of arguments passed into it.
 * Return: 0
 */
int main(int argc, char *argv[])
{
while (argc--)

printf("%s", argv++);

return (0);
}
