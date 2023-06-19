#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - pointer to the new dog
 * @name: name of th new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = (char *)malloc(strlen(name) + 1);
	new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
