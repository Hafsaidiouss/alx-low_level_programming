#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list.
 * @h: pointer to a head of the structer
 * @n: the element of the nex node
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nv;

	nv = create_node (n);
	if (nv == NULL)
		return (NULL);
	nv->next = (*head)->next;
	*head = nv;
	return (nv);
}
