#include "main.h"
/**
 * print_binary - that prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int result = 0;
	int c = 0;
	int i = 0;

	if (n == 0)
		_putchar('0');
	for (c = 31; c >= 0; c--)
	{
		result = n >> c;
		if (result & 1)
		{
			i = 1;
			_putchar('1');
		}
		else if (i == 1)
			_putchar('0');
	}
}
