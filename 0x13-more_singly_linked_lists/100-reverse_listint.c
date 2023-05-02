#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer the head of the origanal list
 * Return: the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *comming;

	if (*head == NULL)
		return (NULL);

	previous = *head;
	*head = (*head)->next;
	previous->next = NULL;
	if (*head != NULL)
		comming = (*head)->next;
	while (*head != NULL)
	{
		(*head)->next = previous;
		previous = *head;
		*head = comming;
		if (comming != NULL)
			comming = comming->next;
	}
	*head = previous;
	return (*head);

}
