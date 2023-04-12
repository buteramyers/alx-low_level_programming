#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of characters
 * @size: size of memory allocated to the array of characters
 * @c: holds the specific character to be used
 * Return: NULL or 0
 */
char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int j = 0;

	pt = malloc(sizeof(char) * size);

	if (size == 0 || pt == NULL)
		return (NULL);
	while (j < size)
	{
		j++;
		pt[j] = c;
	}
	return (pt);
}
