#include "lists.h"

/**
 * add_nodeint_end - add new new node at the end
 * @head: location of the current node
 * @n: data in the node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *after;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (head == NULL)
		*head = newnode;

	else
	{
		after = *head;
		while (after->next != NULL)
			after = after->next;
		after->next = newnode;
	}

	return (*head);
}
