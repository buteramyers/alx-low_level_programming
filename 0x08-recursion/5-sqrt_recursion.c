#include "main.h"

/**
 * _sqrt_help - for checking if n has a natural square root
 * @i: factor that gives n when multiplied
 * @n: number to be processed
 * Return: the value
 */
int _sqrt_help(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt_help(n, i + 1));
}
 /**
  * _sqrt_recursion - get the square root of the number
  * @n: number to be processed
  * Return: _sqrt_help
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_help(n, 0));
}
