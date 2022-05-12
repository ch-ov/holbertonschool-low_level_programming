#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer double to list_t.
 * @n: Integer to use.
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		for (tmp = *head; tmp->next; )
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
