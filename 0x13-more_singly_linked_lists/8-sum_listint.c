#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: the head of the list
 * Return: returns the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
