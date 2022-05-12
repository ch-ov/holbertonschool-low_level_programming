#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to head of linked list.
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
