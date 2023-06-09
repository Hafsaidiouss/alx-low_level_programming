#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	char *dest;
	int i;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		while (s1[size1] != 0)
			size1++;
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		while (s2[size2] != 0)
			size2++;
	}
	dest = malloc(size1 + size2 + 1);
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		dest[i] = s1[i];
	for (i = 0; i <= size2; i++)
		if (s2 != NULL)
			dest[i + size1] = s2[i];
	return (dest);
}
