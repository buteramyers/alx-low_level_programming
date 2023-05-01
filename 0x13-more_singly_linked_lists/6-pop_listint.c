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

	num = (*head)->n;

	free(*head);
	cache = (*head)->next;
	*head = cache;



	return (num);
}

