#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterate through the array
 * @array: location of the array
 * @size: its size
 * @action: function pointer to the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (m < size)
	{
		action(array[m]);
		m++;
	}
}
