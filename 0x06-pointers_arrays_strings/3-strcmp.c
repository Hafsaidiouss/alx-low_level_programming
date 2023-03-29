#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string
 * @s2: string
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int diff = 0;

	while (*(s1 + i) != '\0' && *(s2 + j) != '\0' &&  diff == 0)
	{
		diff = diff + *(s1 + i) - *(s2 + j);
		i++;
		j++;
	}
	return (diff);
}
