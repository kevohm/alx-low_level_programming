#include "dog.h"

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		return;
	}
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
