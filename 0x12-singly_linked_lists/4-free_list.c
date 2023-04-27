#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list.
 * @h: pointer
 */
void free_list(list_t *head)
{
	list_t *next = head;

	while (next != NULL)
	{
		free(head->str);
		next = head->next;
		head = next;
		free(head);
	}
}
