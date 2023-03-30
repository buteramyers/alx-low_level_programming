#include <stdio.h>

int main()
{
	int a[] = {1, 2, 3, 4};
	int *p;
	for (p = &a[0][0]; p <= &a[1][1]; p++)
		printf("%d\n", *p);
	return 0;
}
