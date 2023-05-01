#include "lists.h"

/**
 * listint_len - print the length of a list
 * @h: location of the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("NULL");
		else
		{
			h = h->next;
		}
		count++;
	}
	return (count);

}
