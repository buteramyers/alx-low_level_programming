#include "main.h"
#include <limits.h>

/**
 * array_range - create an array of integers
 * @min: lowest int in the array
 * @max: highest int in the array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int size, *ar;
	int i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ar = malloc(sizeof(int) * size);
	if (ar == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ar[i] = min + i;
		i++;
	}
	return (ar);
}
