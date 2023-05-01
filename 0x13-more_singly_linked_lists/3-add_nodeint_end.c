#include "lists.h"
#include <stdio.h>
/**
 * create_node - ctreate a new node
 * @i: the element of the new node
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
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the structer
 * @n: elements of the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv;
	listint_t *tail;

	nv = create_node(n);
	if (nv == NULL)
		return (NULL);
	if (head == NULL)
	{
		head = &nv;
		return (nv);
	}
	if (*head != NULL)
		tail = *head;
	else
		*head = nv;
	while (tail != NULL && tail->next != NULL)
		tail = tail->next;
	tail->next = nv;
	return (nv);
}
