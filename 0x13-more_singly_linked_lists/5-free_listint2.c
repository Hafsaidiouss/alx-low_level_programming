#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}
