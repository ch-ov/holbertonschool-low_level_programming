#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to head of linked list
 * @index: Position of the node to return
 * Return: dlistint_t *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index)
	{
		if (head == NULL || head->next == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
