#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - print list
 * @h: pointer to a list
 * Return: numvers of nodes
 */
size_t print_list(const list_t *h)
{
        size_t n = 0;
        const list_t *node = h;

        while (node != NULL)
        {
                n++;
                printf("[%u] ", node->len);
                if (node->str != NULL)
                        printf("%s\n", node->str);
                else
                        printf("(nil)\n");
                node = node->next;
        }
        return (n);
}
~                                                                                                                                       
~ 
