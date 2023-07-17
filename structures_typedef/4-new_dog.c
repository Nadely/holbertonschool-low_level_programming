#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - fonction for creates a new dog
 * Return: end fonction for creates a new dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog, *pepole;
	dog_t *array_new_dog;

	array_new_dog = malloc(sizeof(dog_t));
	if (array_new_dog == NULL)
		return (NULL);

	dog = malloc(strlen(name) + 1);
	if (dog == NULL)
	{
		free(array_new_dog);
		return (NULL);
	}
	strcpy(dog, name);

	pepole = malloc(strlen(owner) + 1);
	if (pepole == NULL)
	{
		free(dog);
		free(array_new_dog);
		return (NULL);
	}
	strcpy(pepole, owner);

	array_new_dog->name = dog;
	array_new_dog->age = age;
	array_new_dog->owner = pepole;

	return (array_new_dog);
}
