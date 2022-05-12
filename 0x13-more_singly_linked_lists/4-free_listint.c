#include "lists.h"
/**
 * free_listint - Frees a list_t list.
 * @head: Pointer to list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
