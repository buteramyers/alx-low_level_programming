#include <stdio.h>

/**
 * _memset - function to fill memory
 * @s: Pointer to block memory
 * @b: the constant
 * @n: variable that will be filled with the constant
 * Return: pointer *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
