#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the state members
 * @d: a pointer struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s/nAge: %f/nOwner: %s", d->name, d->age, d->owner);
}
