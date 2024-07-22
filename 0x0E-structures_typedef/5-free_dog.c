#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free allocated mem for dog's struct
 * @d: dog's  struct to free
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
