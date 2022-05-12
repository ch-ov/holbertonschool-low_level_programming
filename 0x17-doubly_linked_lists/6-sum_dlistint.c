#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: Pointer to head of linked list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
