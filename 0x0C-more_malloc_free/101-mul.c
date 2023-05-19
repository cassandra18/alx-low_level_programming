#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_valid_number - checks if a given string is composed only of digits
 * @num: the given string to be checked
 * Return: 0 if false, 1 if true
 *
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

/**
 * multiply - return product of two integers
 * @num1: the first integer
 * @num2: the second integer
 * @result: product
 * Return: product
 */
int multiply(const char *num1, const char *num2, char *result)
{
	int *intermid_result;
	int i, j, product, pos1, pos2, sum, index, start;
	int len1 = 0;
	int len2 = 0;

	while (num1[len1] != '\0')
	len1++;

	while (num2[len2] != '\0')
	len2++;

	intermid_result = malloc(sizeof(int) * (len1 + len2));

	if (intermid_result == NULL)
	return (0);

	for (i = len1 - 1; i >= 0; i--)
	{
	for (j = len2 - 1; j >= 0; j--)
	{
	product = (num1[i] - '0') * (num2[j] - '0');
	pos1 = i + j;
	pos2 = i + j + 1;
	sum = product + intermid_result[pos2];

	intermid_result[pos1] += sum / 10;
	intermid_result[pos2] = sum % 10;
	}
	}

	index = 0;
	start = 0;

	while (index < len1 + len2)
	{
	if (intermid_result[index] != 0)
	start = 1;

	if (start)
	{
	result[index] = intermid_result[index] + '0';
	index++;
			}
	}

	result[index] = '\0';

	free(intermid_result);
	return (1);
}

/**
 * main -  check if the number of arguments (argc) is not equal to 3
 * @argc:  argument count
 * @argv: argument vector
 * Return: status of 98
 */
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int index;
	char result[256];

	if (argc != 3)
	{
	_putchar(Error);
	_putchar('\n');
	return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
	{
	_putchar(Error);
	_putchar('\n');
	return (98);
	}

	if (multiply(num1, num2, result))
	{
	index = o;
	while (result[index] != '\0')
	{
	_putchar(result[index]);
	index++;
	}
	_putchar('\n');
	}

	return (0);
}
