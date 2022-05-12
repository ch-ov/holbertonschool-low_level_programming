#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Plistint_t linked list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
