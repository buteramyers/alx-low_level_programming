#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: count the number of arguments given
 * @argv: pointer to the string values
 * Return: 0
 */
int main(int argc,  __attribute__((unused)) char *argv[])
{
	int balance = argc - 1;

	printf("%d\n", balance);

	return (0);
}
