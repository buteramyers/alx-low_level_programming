#include "main.h"

/**
 * print_rev - functions that prints a reverse string
 * @s: location of the string
 * Return: void
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
