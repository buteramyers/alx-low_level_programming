#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - get sum of given args
 * @n: number of args to be added
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);

	for (m = 0; m < n; m++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
