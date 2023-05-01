#include "lists.h"
#include <stdlib.h>
listint_t *create_node(const int i);
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to a head of the list
 * @idx: ondex to insert
 * @n: vlue to insert
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nv = create_node(n);
	unsigned int i = 0;
	listint_t *temp = *head;

	if (nv == NULL)
		return (NULL);
	while (temp != NULL && i <= idx)
	{
		if ((i + 1) == idx)
		{
			nv->next = temp->next;
			temp->next = nv;
		}
		temp = temp->next;
		i++;
	}
	return (nv);
}
