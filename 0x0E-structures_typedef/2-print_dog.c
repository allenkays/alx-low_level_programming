#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the dog struct variable
 * @d: pointer to dog struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
