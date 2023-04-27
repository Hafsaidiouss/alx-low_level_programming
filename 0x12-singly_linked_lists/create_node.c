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

        temp->str = strdup(str);
        while (str != NULL && *str != '\0')
        {
                len++;
                str++;
        }
        temp->len = len;
        temp->next = NULL;
        return(temp);
}
