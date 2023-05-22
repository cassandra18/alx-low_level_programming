#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @d: dog structure pointer
 * @name: pointer to the character array that holds
 * the name of the dog
 * @age: age of the dog
 * @owner: pointer to the character array holding the name of the dog owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
