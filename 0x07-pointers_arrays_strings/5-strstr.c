#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched from
 * @needle: string to be searched for
 * Return: pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int m, n;

	for (m = 0; haystack[m] != '\0'; m++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[m] == needle[n])
			{
				if (haystack[m + n] == needle[n])
				{
					return (haystack + m);
				}
			}
		}
	}
	return (NULL);
}
