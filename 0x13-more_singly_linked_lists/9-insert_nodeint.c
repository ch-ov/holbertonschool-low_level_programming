#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to listint_t linked list.
 * @idx: Index of the list where the new node should be added
 * @n: Index of the data
 * Return: listint_t*
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (--idx)
		{
			tmp = tmp->next;
			if (!tmp)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
