#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: where the memory will be copied
 * @src: source of the copied memory
 * @n: number of bytes to be asssigned
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;

	}

	return (dest);
}
