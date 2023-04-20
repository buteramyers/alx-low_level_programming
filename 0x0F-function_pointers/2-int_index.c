#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - look through array
 * @array: location of the array
 * @size: its size
 * @cmp: function pointer for the array
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (m < size)
	{
		m++;
		if (cmp(array[m]))
			return (m);
	}

	return (-1);
}
