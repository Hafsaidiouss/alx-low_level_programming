#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to a list
 * Return: a number of nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != 0)
	{
		n++;
		h = h->next;
	}
	return (n);
}
