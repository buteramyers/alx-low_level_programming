#include "main.h"
#include <string.h>

/**
 * _realloc - reallocate more memory to a variable
 * @ptr: address of the variable
 * @old_size: previous size allocated
 * @new_size: added size given
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if(new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
		{
			return (NULL);
		}
		return (s);
	}
	if (new_size == old_size)
		return (s);
	if (old_size == '\0')
		return (NULL);
	if (new_size > old_size)
	{
		memcpy(s, ptr, old_size);
	}
	memcpy(s, ptr, new_size);
	free(ptr);
	return (s);
}
