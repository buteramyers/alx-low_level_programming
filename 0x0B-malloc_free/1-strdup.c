#include "main.h"

/**
 * _strdup - duplicate the values of the strings given
 * @str: location of string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int str_length, j = 0;
	char *_ptr;

	str_length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[str_length])
	{
		str_length++;
	}

	_ptr = malloc(++str_length * sizeof(char));

	if (_ptr == NULL)
	{
		return (NULL);
	}

	while (str[j])
	{
		_ptr[j] = str[j];
		j++;

	}

	return (_ptr);
}
