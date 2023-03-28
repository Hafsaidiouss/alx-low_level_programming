#include "main.h"
/**
 * _strcpy - Copier une chaîne
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: pointer to destination buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
