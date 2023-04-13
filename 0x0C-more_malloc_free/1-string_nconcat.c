#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first stringi
 * @s2: second string
 * @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *dest;
	unsigned int i;

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
	if (n > size2)
		n = size2;
	dest = malloc(sizeof(char) * (size1 + n + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		dest[i] = s1[i];
	for (i = 0; i < n; i++)
		dest[i + size1] = s2[i];
	dest[i + size1] = 0;
	return (dest);
}
