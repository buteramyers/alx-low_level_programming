#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print out the list of numbers
 * @h: location of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("NULL");
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		count++;
	}
	return (count);
}
