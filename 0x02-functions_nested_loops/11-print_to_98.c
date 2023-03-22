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
/**
 * print - print an num using putchar
 * @num : number
 */
void print(int num)
{
	if (num < 0)
	{
		_putchar('-');
	}
	if (_abs(num) >= 100)
	{
		_putchar('0' + _abs(num) / 100);
	}
	if (_abs(num) % 100 >= 10)
	{
		_putchar('0' + (_abs(num) % 100) / 10);
	}
	_putchar('0' + _abs(num) % 10);
}
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new li
 *@n : natural number
 */
void print_to_98(int n)
{
	int k;

	if (n == 98)
	{
		print(n);
	}
	else if (n < 98)
	{
		for (k = n; k <= 98; k++)
		{
			print(k);
			if (k != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (k = n; k >= 98; k--)
		{
			print(k);
			if (k != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
