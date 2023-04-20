#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of my main
 * @addr: pointer to any memory address that i will work with
 * @size: size in bytes to be printed out
 * Return: void
 */
void print_opcodes(char *addr, int size)
{
	int m = 0;

	while (m < size)
	{
		printf("%02hhx ", addr[m]);
		m++;
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to a string of commandline arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int m = 0;
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (m < size)
	{
		printf("%02hhx ", ((char *)main)[m]);
		m++;
	}
	printf("\n");

	return (0);
}
