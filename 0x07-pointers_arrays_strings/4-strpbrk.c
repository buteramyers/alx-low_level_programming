#include <stdio.h>

/**
 * _strpbrk - search the string for a set of bytes
 * @s: pointer to string
 * @accept: pointer to variable to be checked in *s
 * Return: *s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m;
	int n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				return (s + m);
			}
		}
	}

	return (NULL);
}
