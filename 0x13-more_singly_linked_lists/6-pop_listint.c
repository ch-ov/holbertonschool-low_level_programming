#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer to listint_t list
 * Return: the head node’s int data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
