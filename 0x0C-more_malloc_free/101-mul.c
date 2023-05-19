#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_valid_number - checks if a given string is composed only of digits
 * @num: the given string to be checked
 * Return: 0 if false, 1 if true
 * multiply - return product of two integers
 * @num1: the first integer
 * @num2: the second integer
 * Return: product
 * main -  check if the number of arguments (argc) is not equal to 3
 * Return: status of 98
 */
int is_valid_number(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
		{
			return (0);
		}
		num++;
	}
	return (1);
}

	unsigned long long multiply(unsigned long long num1, unsigned long long num2)
	{
		return (num1 * num2);
	}

	int main(int argc, char *argv[])
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (98);
		}

		char *num1_str = argv[1];
		char *num2_str = argv[2];

		if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
		{
			printf("Error\n");
			return (98);
		}
		
		unsigned long long num1 = strtoull(num1_str, NULL, 10);
		unsigned long long num2 = strtoull(num2_str, NULL, 10);
		unsigned long long result = multiply(num1, num2);

		printf("%ull\n", result);
		return (0);
	}
