#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - give the sum of the diagonals
 * @a: pointer storing the arrays
 * @size: size of the arrays
 * return: void
 */
void print_diagsums(int *a, int size)
{
	int n, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 += a[n * size + n];
		sum2 += a[n * size + (size - 1 - n)];
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
