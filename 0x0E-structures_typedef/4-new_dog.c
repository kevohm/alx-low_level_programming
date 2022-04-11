#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t a;
	if (a)
	{
	a.name = name;
	a.age = age;
	a.owner = owner;
	return (a);
	}
	return (NULL);
}
