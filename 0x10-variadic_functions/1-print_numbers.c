#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - prints out numbers
 * @separator: separate the numbers from one another
 * @n: number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		printf("Nothing to print");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(ap);
}
