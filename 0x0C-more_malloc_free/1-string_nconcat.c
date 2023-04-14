#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string value to be copied
 * @s2: string two
 * @n: number of bytes
 * Return: pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, m;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2)
		n = len2;

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	for (m = 0; m < n ; m++)
		ptr[i + m] = s2[m];

	ptr[i + m] = '\0';

	return (ptr);
}
