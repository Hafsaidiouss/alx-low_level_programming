#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 *@c : char to ceck
 *Return: 1 if upper case 0 otherwise.
 */
int _isupper(int c)
{
	int k;

	if (c <= 90 && c >= 65)
	{
		k = 1;
	}
	else
	{
		k = 0;
	}
	return (k);

}

