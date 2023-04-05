#include "main.h"

/**
 * _puts_recursion - prints the recursive string
 * @s: pointer holding the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
