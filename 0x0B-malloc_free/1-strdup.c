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
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != 0)
		size++;
	t = (char *) malloc(size);
	if (t == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
