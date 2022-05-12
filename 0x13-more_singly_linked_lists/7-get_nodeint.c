#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the listint_t linked list.
 * @index: Index to compare to current position.
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (count < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		count++;
	}
	if (current)
		return (current);
	return (NULL);
}
