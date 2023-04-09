#include "main.h"
/**
 * _isdigit - checks for lowercase character
 *
 * Return: an int
 * @c: is an int to check
 */
int _isdigit(int c)
{
	int k;

	if (c <= 57 && c >= 48)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	return (k);
}
