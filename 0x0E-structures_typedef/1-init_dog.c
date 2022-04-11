#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void init_dog(dog_t *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
