#include "main.h"

/**
 * main - print _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
