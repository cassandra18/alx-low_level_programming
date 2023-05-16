#include  <stdlib.h>
#include "main.h"
/**
* _strdup - a function that returns a ponter to anew string which
* is a duplictae of
* the original string
*@str: the string to be dupliated
*Return: NULL  if str is NULL, return pointer to
*the duplicated string on success
* return NULL if the memory allocated is insufficient.
*/

char *_strdup(char *str)
{
	int size, p;
	char *ptr;

	if (str == NULL)
		return (NULL);

	/*determine the length of string*/

	for (size = 0; str[size] != '\0'; size++)
		;

	ptr = (char *) malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	return (NULL);

	/*copy content of @str into new array*/
	for (p = 0; str[p] != '\0'; p++)
		ptr[p] = str[p];
	ptr[p] = '\0';
	return (ptr);
}
