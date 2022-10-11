#include <stdlib.h>
#include "dog.h"

int str_len(char *s);
char *str_copy(char *dest, char *src);

/**
 * new_dog- creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return:dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len0, len1;

	len0 = str_len(name);
	len1 = str_len(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len0 + 1));
	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len1 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);

		return (NULL);
	}
	str_copy(dog->name, name);
	str_copy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
/**
 * str_len - returns the length of a string
 * @s: string to be checked
 * Return: length of string
 */
int str_len(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
/**
 * str_copy - copies the string pointed to by src
 * @src: string to copy
 * @dest: pointer to variable to copy to
 * Return: pointer copied string
 */
char *str_copy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
