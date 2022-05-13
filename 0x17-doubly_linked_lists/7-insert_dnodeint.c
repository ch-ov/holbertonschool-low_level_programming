#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to head of linked list.
 * @idx: Position of the node to return
 * @n: Value to store
 * Return: dlistint_t *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	if (new->next)
		new->next->prev = new;
	return (new);
}
