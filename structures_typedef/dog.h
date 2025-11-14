#ifndef DOG_H
#define DOG_H

#include <stdlib.h>


/**
* struct dog - Structure décrivant un chien
* @name: Nom du chien
* @age: Age du chien
* @owner: Nom du proprietaire du chien
* Description: Structure qui contient les informations principales d'un chien
*/

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;
void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
