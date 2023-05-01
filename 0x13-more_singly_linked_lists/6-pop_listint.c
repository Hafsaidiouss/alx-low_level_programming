#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to thr hrad of thr list
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int i = 0;

	if (*head != NULL)
	{
		i = (*head)->n;
		*head = (*head)->next;
	}
	return (i);
}
