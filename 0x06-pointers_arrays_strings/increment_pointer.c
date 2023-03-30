#include <stdio.h>

int main()
{
	int a[] = {5, 12, 23, 34, 45, 56, 67, 78};
	int *p = &a[0];
	printf("%d", *(p++));
	printf("%d", *p);
	printf("\n");
	return 0;
}
