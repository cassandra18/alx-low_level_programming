#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: the destination string
 * @s2: the source string
 * @n: the number of characters in s2 to concatenate
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	unsigned int s1_length = strlen(s1);
	unsigned int s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	unsigned int result_length = s1_length + n;
	char *result = malloc((result_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2, n);
	return (result);
}
