#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (int i = 0 ; i < 16 ; ++i)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar('a' + (i - 10));
	}
	putchar('\n');

	return (0);
}
