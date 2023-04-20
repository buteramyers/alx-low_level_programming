#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name given
 * @name: location of the name
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
