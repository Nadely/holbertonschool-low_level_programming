#include <stdio.h>
#include "dog.h"

/**
 * print_dog - fonction for print of struct dog
 * @d: pointer of struct
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name : nil");
	if (d->owner == NULL)
		printf("Owner : nil");
	if (d == NULL)
		return;
	printf("Name : %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner : %s\n", d->owner);
}
