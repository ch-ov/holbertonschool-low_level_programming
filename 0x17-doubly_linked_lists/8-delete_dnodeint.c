#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index of linked list.
 * @head: Double pointer to head of linked list.
 * @index: Position of the node to delete
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int x = 0;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (x < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		x++;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);

	return (1);
}
