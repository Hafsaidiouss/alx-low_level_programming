#include "main.h"
/**
 * *infinite_add - adds two numbers.
 * @n1: num 1
 * @n2 numm 2
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: somme
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *k = 0;
	
	while ((int)sizeof(r) < size_r && *k <= *n2)
	{
		*r = *n1 + 1;
		*k = *k + 1;
	}
	if (*k == *n2)
	{
		return (r);
	}
	else
	{
		return (0);
	}
}
