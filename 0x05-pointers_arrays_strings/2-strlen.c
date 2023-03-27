#include "main.h"

/**
 * strlen - checks string length
 * @s: location of the string 
 * Return: string length
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
