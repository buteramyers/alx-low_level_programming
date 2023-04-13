#include "main.h"

/**
 * malloc_checked - allocate memory to a variable
 * @b: contained the string to be allocated memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void _ptr;

	_ptr = malloc(b);

	if (_ptr == NULL)
		exit(98);

	return (_ptr);
}
