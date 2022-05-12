#include "lists.h"
/**
 * print_listint -  Prints all the elements of a listint_t list.
 * @h: Pointer to list_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		if (h->n == 0)
			printf("[0] (nil)\n");
		else
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
