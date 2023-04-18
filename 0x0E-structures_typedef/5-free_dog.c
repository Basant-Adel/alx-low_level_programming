#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs
 *@d: Pointer to free
 *Return: Nothing to return
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
