#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char
 * @accept: char
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;

	}
	return (0);
}

