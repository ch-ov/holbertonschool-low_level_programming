#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer double to list_t.
 * @str: String to use.
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
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
