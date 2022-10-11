#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			print("Name: (nil)\n");
		else
			 print("Name: %s\n", d->name);

		 print("Age: %f\n", d->age);

		if (d->owner == NULL)
			print("Owner: (nil)\n");
		else
			print("Owner: %s\n", d->owner);
	}
}
