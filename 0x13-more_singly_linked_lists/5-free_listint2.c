#include "lists.h"
/**
 * free_listint2 - Frees a list_t list and sets the head to NULL
 * @head: Pointer to list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
