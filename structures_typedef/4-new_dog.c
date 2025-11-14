#include <stdlib.h>
#include "dog.h"

/**
 * str_copy - copie une chaîne de caractères
 * @src: chaîne à copier
 *
 * Return: pointeur vers la nouvelle chaîne, NULL si échec
 */

char *str_copy(char *src)
{
	int i = 0;
	int j = 0;
	char *dest;

	if (src == NULL)
		return (NULL);

	while (src[i] != '\0')
		i++;

	dest = malloc(i + 1);
	if (dest == NULL)
		return (NULL);

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = str_copy(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = str_copy(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
