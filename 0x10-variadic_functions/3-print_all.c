#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: given args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char c;
	char *s;
	int flag = 0;

	va_start(ap, format);
	while (format[i] && format)
	{
		c = format[i];
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		{
			printf("%s", flag ? ", " : "");
			flag = 1;
			switch (c)
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					printf("%s", s ? s:"(nil)");
					break;
			}
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
