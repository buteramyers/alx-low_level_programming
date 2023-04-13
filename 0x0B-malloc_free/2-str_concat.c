#include "main.h"
<<<<<<< HEAD
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
=======

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
>>>>>>> d9c545418993bbfb4f3a7c3507d844e25e5a28eb

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

<<<<<<< HEAD
	_ptr = malloc((length1 + length2 + 1) * sizeof(char));
=======
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
>>>>>>> d9c545418993bbfb4f3a7c3507d844e25e5a28eb

	if (_ptr == NULL)
	{
		return (NULL);
	}
<<<<<<< HEAD
	memcpy(_ptr, s1, length1);
	memcpy(_ptr + length1, s2, length2 + 1);

=======
	while (s1[i])
	{
		_ptr[i] = s1[i];
		i++;
	}
>>>>>>> d9c545418993bbfb4f3a7c3507d844e25e5a28eb
	return (_ptr);
}
