#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: count the number of args given
 * @argv: holds addresses to the strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
