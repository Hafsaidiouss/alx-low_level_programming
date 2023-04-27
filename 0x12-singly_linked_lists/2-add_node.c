#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_node - creates node
 * @str: str
 * Return: a pointer a new node
 */
list_t *create_node(const char *str)
{
	list_t *temp = (list_t *) malloc(sizeof(list_t));
	char *s;

	if (temp == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL && str != NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = s;
	temp->len = strlen(s);
	temp->next = NULL;
	return (temp);
}
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of a list
 * @str: dtring
 * Return: the address of the new elemen
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = create_node(str);

	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
		*head = temp;
	else
	{
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
