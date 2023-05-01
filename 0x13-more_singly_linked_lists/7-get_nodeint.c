#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: the  head of the list
 * @index: index
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i <= index)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
