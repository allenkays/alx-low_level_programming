#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new instance of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len0, len1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (len0 = 0; *(name + len0); len0++)
		;
	len0++;
	dog->name = malloc(len0 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len0; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (len1 = 0; owner[len1]; len1++)
		;
	len1++;
	dog->owner = malloc(len1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
