#include "main.h"
/**
 * *_strncpy - that copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: ponitrer of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != 0 && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
