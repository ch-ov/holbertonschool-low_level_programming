#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to structure list_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		h = h->next;
	}
	return (x);
}
