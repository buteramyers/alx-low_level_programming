#include "main.h"

/**
  str_concat - concatenate two strings
  @s1: location of the destination string
  @s2: location of the source string
Return: NULL or pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i, n;
	char *_ptr;

	int length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		s1[i] = s2[n];
		i++;
		n++;
	}
	s1[i] = '\0';
	while (s1[length])
	{
		length++;
	}
	
	_ptr = malloc(length * sizeof(char));

	if (_ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		_ptr[i] = s1[i];
		i++;
	}
	return (_ptr);
}
