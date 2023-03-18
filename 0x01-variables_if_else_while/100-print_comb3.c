#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			if (i != j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			else
			{
				j++;
			}
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}

