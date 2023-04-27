#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
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
 * add_node_end - unction that adds a new node at the end of a list_t list.
 * @head: poointer to a list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = create_node(str);
	list_t *p = *head;

	if (temp == NULL)
		return (NULL);
	if (p != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		p->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
