#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched from
 * @needle: string to be searched for
 * Return: pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int m, n, match_len;

	match_len = 0;
	while (needle[match_len] != '\0')
	{
		match_len++;
	}

	for (m = 0; haystack[m] != '\0'; m++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[m + n] != needle[n])
			{
				break;
			}
		}
		if (n == match_len)
			return (haystack + m);
	}
	return (NULL);
}
