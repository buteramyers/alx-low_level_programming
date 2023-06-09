#include "lists.h"

/**
 * pop_listint - remove from the list
 * @head: location of current node
 * Return: number
 */
int pop_listint(listint_t **head)
{
	listint_t *cache;
	int num;

	if (!head || !*head)
		return (0);
	cache = *head;
	num = cache->n;
	*head = cache->next;
	free(cache);

	return (num);
}

