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
	int k;

	printf("%ld, ",i);
	printf("%ld, ",j);
	for (k = 2; k <= 50; k++)
	{
		l = i + j;
		i = j;
		j = l;
		if (k < 50)
		{
			printf("%ld, ",l);
		}
		else
		{
			printf("%ld",l);
		}
	}
	printf("\n");
	return (0);
}
