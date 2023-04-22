#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - print out strings
 * @separator: separate the strings given
 * @n: number of strings given
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (ap == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(ap, char *));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
