#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to head of linked list
 * @n: Value to store
 * Return: dlistint_t *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (tmp == NULL)
		new->next = NULL;
	else
	{
		while (tmp->prev)
			tmp = tmp->prev;
		tmp->prev = new;
		new->next = tmp;
	}
	*head = new;

	return (*head);
}
