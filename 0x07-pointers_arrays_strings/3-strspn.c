#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: ength of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	while (s[i] != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (s[i] == accept[j])
			{
				k = k + 1;
				break;
			}
			j++;
		}
		if (accept[j] == 0)
			return (k);
		i++;

	}
	return (k);
}
