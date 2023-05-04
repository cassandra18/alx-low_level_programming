#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: the destination string pointer
 * @src: the source string pointer
 * return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int str, j;

	str = 0;
	while (dest[str] != '\0')
	{
		str++;
	}
	for (j = 0; src[j] != '\0'; j++, str)
	{
		dest[str] = src[j];
	}
	dest[src] = '\0';
	return (dest);
}
