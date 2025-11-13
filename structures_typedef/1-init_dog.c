#include "dog.h"

/**
* init_dog - Initialize the values in the strut in dog.h
* @d: Pointer to the structure dog.h
* @name: Name of the dog
* @age: Age of the dog
* @owner: Name oof the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
