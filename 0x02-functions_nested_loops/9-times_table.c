#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0; i <= 9; i++)
		{
			j = i * k;
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			else if (j > 0)
			{
				_putchar(' ');
			}
			_putchar('0' + j % 10);
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
