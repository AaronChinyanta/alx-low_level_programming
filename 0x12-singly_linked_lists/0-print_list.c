#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(conts list_t *h)
{
	size_t nodes = o;

	while (h)
	{
		if (h->str == NULL)
			print("[0] (nil)\n");
		else
			printf("[%d] %s", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
