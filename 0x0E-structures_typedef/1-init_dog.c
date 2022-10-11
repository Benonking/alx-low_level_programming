#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intitalise variable struct dog
 * @d: pointer to srtucture
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
