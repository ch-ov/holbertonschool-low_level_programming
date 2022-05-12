#include "lists.h"
/**
 * print_list -  Prints all the elements of a list_t list.
 * @h: Pointer to list_t
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (x);
}
