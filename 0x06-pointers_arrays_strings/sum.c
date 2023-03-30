#include <stdio.h>

int main()
{
	int a[] = {11, 22, 33, 44, 55, 66};
	int sum = 0, *p;

	for (p = a; p <= a + 5; p++)
		sum += *p;

	printf("Sum is %d\n", sum);
	return 0;
}
