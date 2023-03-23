#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 1;
	long int j = 2;
	long int l;
	int sum = j;

	while (l <  4000000)
	{
		l = i + j;
		i = j;
		j = l;
		if (l % 2)
		{
			sum = sum + l;
		}
	}
	printf("%d\n", sum);
	return (0);
}
