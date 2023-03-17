#include <stdio.h>
/**
 *  main -print out sizes of data types in c
 *  Return: 0
*/
int main(void)
{
	printf("Size of a char: %ld byte(S)\n", sizeof(char));
	printf("Size of a int: %ld byte(S)\n", sizeof(int));
	printf("Size of a long int: %ld byte(S)\n", sizeof(int));
	printf("Size of a long long int: %ld byte(S)\n", sizeof(int));
	printf("Size of a float: %ld byte(S)\n", sizeof(float));
	return (0);
}
