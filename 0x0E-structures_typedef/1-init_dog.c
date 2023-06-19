#include <stdlib.h>
#include <dog.h>

/**
 * init_dog - intializes dog
 * @d:pointer to the struct
 * @name:dogs'name
 * @age:dogs'age
 * @owner:dogs'owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
