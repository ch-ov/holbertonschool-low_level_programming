#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to structure list_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		h = h->next;
	}
	return (x);
}
