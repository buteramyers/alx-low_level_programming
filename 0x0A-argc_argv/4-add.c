#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main entry point
 * @argc: argument count
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m, sum, num, flag;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	sum = 0;
	flag = 0;

	for (m = 1; m < argc; m++)
	{
		num = atoi(argv[m]);
		if (num == 0 && strcmp(argv[m], "0") != 0)
		{
			flag = 1;
			break;
		}
		if (num > 0)
		{
			sum += num;
		}
	}
	if (flag == 1)
	{
		printf("Error\n");
		return (-1);
	}
	printf("%d\n", sum);
	return (0);
}
