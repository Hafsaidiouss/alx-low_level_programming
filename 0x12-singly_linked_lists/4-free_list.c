#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function that frees a list_t list.
 * @h: pointer
 */
void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
