#include "lists.h"
#include <stdio.h>
/**
 * create_node - ctreate a new node
 * @n: the element of the new node
 * Return: the address of the new node
 */
listint_t *create_node(const int i)
{
	listint_t *nv;

	nv = malloc(sizeof(listint_t));
	if (nv == NULL)
		return (NULL);
	nv->n = i;
	nv->next = NULL;
	return (nv);
}
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
	if (*head != NULL)
	{
		nv->next = (*head)->next;
		(*head) = nv;
	}
	else
		head = &nv;
	return (nv);
}
