#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int min;
	int h;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');

		}
	}
}
