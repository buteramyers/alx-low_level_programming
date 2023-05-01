#include "lists.h"

/**
 * free_listint - Frees the list.
 * @head: location of the current node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cache;

	while (head)
	{
		cache = head->next;
		free(head);
		free(head->next);
		head = cache;
	}
}
