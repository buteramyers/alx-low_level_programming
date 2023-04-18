#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: 0 or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->name[strlen(name)] = '\0';
	new_dog->age = age;
	strcpy(new_dog->owner, owner);
	new_dog->owner[strlen(owner)] = '\0';

	return (new_dog);
}
