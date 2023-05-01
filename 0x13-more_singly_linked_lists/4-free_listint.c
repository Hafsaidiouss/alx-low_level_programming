#include "lists.h"
#include <stdio.h>
/**
 * free_listint -  function that frees a listint_t list.
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
