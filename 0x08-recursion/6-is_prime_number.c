#include "main.h"

/**
 * prime_check - checks if the number given is prime or not
 * @n: given number
 * @i: iterator
 * Return: 0 or 1
 */
int prime_check(int n, int i)
{
	if (i <= n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		return (prime_check(n, i + 1));
	}
	return (1);
}
/**
 * is_prime_number - checks if given number is a negative
 * @n: given number
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || n < 0)
		return (0);
	return (prime_check(n, 2));
}
