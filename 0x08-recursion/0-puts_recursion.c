#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints the recursive string
 * @s: pointer holding the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	printf("%s\n", s);
	s++;

	if (*s == '\0')
	{
		_puts_recursion(s);
	}
}
