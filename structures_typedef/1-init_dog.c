#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Variable of fonction struct dog
 * @d: pointer for struct dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
                return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
