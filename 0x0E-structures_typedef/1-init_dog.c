#include "dog.h"

/**
 * struct dog - structure definition of a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
