#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - print list
 * @h: pointer to a list
 * Return: numvers of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		size++;
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		node = node->next;
	}
	return (size);
}
