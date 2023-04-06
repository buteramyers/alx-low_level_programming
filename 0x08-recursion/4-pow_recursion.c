#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - print the power of given a number
 * @x: value to returned
 * @y: power of the value
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int product;

	if (y < 0)
		return (-1);
	if (y == 0 || x == 1)
		return (1);
	product = x * _pow_recursion(x, y - 1);
	return (product);
}
