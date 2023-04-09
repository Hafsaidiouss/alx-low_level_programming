#include "main.h"
/**
 * _strchr -  function that locates a character in a string.
 * @s: pointer to a char
 * @c: a char
 * Return: a pointer to c
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return (0);
}
