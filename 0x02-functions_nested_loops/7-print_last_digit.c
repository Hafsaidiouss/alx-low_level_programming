#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a : a number
 * Return: the last digit
 */
int print_last_digit(int a)
{
	int k;

	if (a < 0)
	{
		k = -a % 10;
	}
	else
	{
		k = a % 10;
	}
	_putchar('0' + k);
	return (k);
}
