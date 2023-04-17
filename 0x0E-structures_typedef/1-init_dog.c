#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - intializes the struct members with passed values
 * @d: the sent struct
 * @name: the first state
 * @age: the second state
 * @owner: the third state
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	d = malloc(sizeof(struct dog));
}
