#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b: char
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			n = n * 2 + (*b - '0');
		}
		else
			return (0);
		b++;
	}
	return (n);
}
