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
	list_t *temp = malloc(sizeof(list_t));
	int len = 0;

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	while (str != NULL && *str != '\0')
	{
		len++;
		str++;
	}
	temp->len = len;
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

	temp->next = *head;
	*head = temp;
	return (temp);
}
