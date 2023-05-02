#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint
 * @head: pointer to the head of the list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *comming;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	comming = (*head)->next;
	while (temp != NULL && i <= index)
	{
		if ((i + 1) == index)
		{
			if (comming == NULL)
				return (-1);
			temp->next = comming->next;
			free(comming);
			return (1);
		}
		i++;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		comming = temp->next;
	}
	return (-1);
}
