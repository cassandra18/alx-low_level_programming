#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that finds the length of a string
 * @str: the string whose length is to be measured
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - a function that copies contents of one string to another
 * @dest: the buffer storing the string copy
 * @src: the source string
 * Return: the pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - a function thta is used to create a new dog
 * @name: the name of the dog
 * @age: age of the the dog
 * @owner: owner of the dog
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner =  malloc(sizeof(char) * (_strlen(owner) + 1));

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	ptr->name = _strcopy(ptr->name, name);
	ptr->age =  age;
	ptr->owner = _strcopy(ptr->owner, owner);

	return (ptr);
}

