#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, k;

	for (i = 0 ; i <= 98 ; i++)
	{
		for (k = 0 ; k <= 99 ; k++)
		{
			if (i < k)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');

				if (i == 98 && k == 99)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
