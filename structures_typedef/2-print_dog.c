#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the information of a dog struct
 * @d: pointer to the dog struct
 *
 * Description: prints the name, age and owner of the dog.
 * If any element is NULL, prints (nil) instead.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);
}
