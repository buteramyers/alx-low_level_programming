#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print the dog
 * @d: pointer to the instantiation of the dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
		printf("Name: nil\n");
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
		printf("Owner: nil\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
