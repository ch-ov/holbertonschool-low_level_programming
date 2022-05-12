#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to head of linked list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t counter = 0;

	while (tmp && tmp->prev)
		tmp = tmp->next;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
