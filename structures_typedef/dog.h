#ifndef DOG
#define DOG
/**
 * struct dog - define a struct for a main.c
 * @name: name dog
 * @age: age dog
 * @owner: who
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
