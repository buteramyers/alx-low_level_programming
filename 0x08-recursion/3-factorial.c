#include "main.h"
#include <stdio.h>

/**
 * factorial - get the factorial of a given number
 * @n: input value to be used
 * Return: 0
 */
int factorial(int n)
{
	int product;

	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	product = n * factorial(n - 1);
	return (product);
}
