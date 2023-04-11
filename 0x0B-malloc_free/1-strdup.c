#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	char *t;
	int i;

	t = malloc(sizeof(*str));
	if (t == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		t[i] = str[i];
	return (t);
}
