#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c : character to check
 * Return: 1 is alpha 0 if not
 */
int _isalpha(int c)
{
	int k;

	if (c <= 122 && c >= 67)
	{
		k = 1;
	}
	else if (c <= 90 && c >= 65)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	return (k);
}
