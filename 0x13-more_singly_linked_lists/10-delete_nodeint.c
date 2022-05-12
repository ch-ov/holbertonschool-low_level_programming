#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index of listint_t linked list
 * @head: Double pointer to listint_t linked list
 * @index: index of the node that should be deleted
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	else
	{
		while (index-- != 0)
		{
			previous = tmp;
			tmp = tmp->next;
			if (tmp == NULL)
			return (-1);
		}
		previous->next = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	return (1);
}
