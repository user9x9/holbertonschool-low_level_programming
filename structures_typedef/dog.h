#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure décrivant un chien
* @name: Nom du chien
* @age: Age du chien
* @owner: Nom du proprietaire du chien
* Description: Structure qui contient les informations principales d'un chien
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
