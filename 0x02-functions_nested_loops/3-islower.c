#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: an int
 * @c: is an int to check
 */
int _islower(int c)
{
	int k;

	if (c <= 122 && c >= 97)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	return (k);
}
