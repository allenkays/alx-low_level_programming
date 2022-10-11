#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes struct dog variable
 * @d: pointer to variable to be initialized
 * @name: variable pointer to dog's name
 * @age: dog's age
 * @owner: pointer to name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
