#include "main.h"

/**
 * _strlen_recursion - print the length of the string
 * @s: pointer  to the string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
		/* return: the value of the function */
	else
		return (0);
}
