#include <stdio.h>

/**
 * _strspn - calculates the length substring
 * @s: address of s string
 * @accept: address of bytes to be processed in the length
 * Return: n bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;
	int n, match;

	for (m = 0 ; s[m] != '\0' ; m++)
	{
		match = 0;
		for (n = 0 ; accept[n] != '\0' ; n++)
		{
			if (s[m] == accept[n])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			break;
		}
	}
	return (m);

}
