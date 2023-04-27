#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list
 * @h: pointer to a list
 * Return: numvers of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		printf("[%u] ", h->len);
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");
		h = h->next;
	}
	return (n);
}
