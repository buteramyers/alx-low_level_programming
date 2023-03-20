#include <stdio.h>

/* main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, k;

	for (i = 0 ; i <= 9 ; ++i)
	{
		for (k = 0 ; k <= 9 ; ++k)
		{
			if (i != k)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
