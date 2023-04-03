#include <stdio.h>

/**
 * _strchr - locates the first occurrence of a string
 *  @s: pointer to string s
 *  @c: character to be located
 *  Return: *s
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0 ; s[b] != '\0' ; b++)

	{
		if (s[b] == c)
		{
			return (&s[b]);
		}
	}

	return ('\0');

}
