#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n : num to check
 * Return: Returns 1 and prints + if n is greater than zero Returns 0 and pri
 *
 */
int print_sign(int n)
{
	int k;

	if (n == 0)
	{
		k = 0;
		_putchar('0');
	}
	else if (n > 0)
	{
		k = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		k = -1;
		_putchar('-');
	}
	return (k);
}
