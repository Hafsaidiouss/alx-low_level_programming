#include "main.h"
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
	if (num >= 100)
	{
		_putchar('0' + num / 100);
	}
	else if (num > 0)
	{
		_putchar(' ');
	}
	if (num % 100 >= 10)
	{
		_putchar('0' + (num % 100) / 10);
	}
	else if (num >= 100)
	{
		_putchar('0');
	}
	else if (num < 10 && num > 0)
	{
		_putchar(' ');
	}
	_putchar('0' + num % 10);
}
/**
 *print_times_table - function that prints the n times table, starting with
 *@n : an intiger
 */
void print_times_table(int n)
{
	int i;
	int k;
	int j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (i == 0 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(' ');
				print (k);
				if (j < n)
				{
					_putchar(',');
				}
				else
				{
					_putchar('\n');
				}
			}

		}
	}
}

