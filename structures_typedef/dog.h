#ifndef DOG
#define DOG
/**
 * struct dog - define a struct for a main.c
 * @name: name dog
 * @age: age dog
 * @owner: who
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
