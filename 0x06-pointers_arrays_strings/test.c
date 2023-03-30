#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
	*min = *max = arr[0];
	int i;
	for (i = 1; i < len; i++)
	{
		if (arr[i] > *max)
			*max = arr[i];
		if (arr[i] < *min)
			*min = arr[i];
	}
}



int main()
{
	int a[] = {23, 34, 6, 79, 234, 48, 69, 50, 2, 94};
	int min, max;
	int len = sizeof(a) / sizeof(a[0]);
	minMax(a, len, &min, &max);
	printf("Minimum value in the array is: %d and Maximum value in the array is: %d", min, max);
	printf("\n");
	return 0;
}
