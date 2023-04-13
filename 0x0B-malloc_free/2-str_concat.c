#include "main.h"
#include <string.h>
/**
 * str_concat - concatenate two strings
 * @s1: location of the destination string
 * @s2: location of the source string
 * Return: NULL or pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *_ptr;
	int length1 = strlen(s1);
	int length2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	_ptr = malloc((length1 + length2 + 1) * sizeof(char));

	if (_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(_ptr, s1, length1);
	memcpy(_ptr + length1, s2, length2 + 1);

	return (_ptr);
}
