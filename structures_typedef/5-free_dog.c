#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - libère la mémoire allouée pour un chien
 * @d: pointeur vers la structure dog à libérer
 *
 * Description: libère les chaines name et owner
 * puis la structure dog elle meme.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
