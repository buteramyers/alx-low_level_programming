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
	int name_len, owner_len;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	name_len = strlen(name);
	owner_len = strlen(owner);

	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
