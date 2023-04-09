#include "main.h"
/**
 * _memcpy - _memcpy
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: int
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
