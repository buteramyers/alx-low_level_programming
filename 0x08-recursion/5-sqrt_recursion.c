#include "main.h"

/**
 * _sqrt_help - for checking if n has a natural square root
 * _sqrt_recursion - return the square root of the number
 * @i: factor that gives n when multiplied
 * @n: number to be processed
 * Return: 0
 */
int _sqrt_help(int n, int i)
{
	if (i == 0)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_help(n, i - 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_help(n, 35));
}
