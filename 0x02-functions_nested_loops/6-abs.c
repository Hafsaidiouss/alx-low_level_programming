#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @a : an integer
 * Return: absolute value of an integer.
 */
int _abs(int a)
{
	int k;

	if (a > 0)
	{
		k = a;
	}
	else
	{
		k = -a;
	}
	return (k);
}
