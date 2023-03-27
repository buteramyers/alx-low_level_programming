#include <stdio.h>

/**
 * swap_int - replace values
 * @a: pointer a
 * @b: pointer b
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
