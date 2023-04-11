#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - create an array
 * @size: size of int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);

}
