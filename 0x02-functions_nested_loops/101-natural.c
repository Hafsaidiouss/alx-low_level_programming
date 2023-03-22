#include "main.h"
/**
 * main - hat computes and prints the sum of all the multiples of 3 or 5
 * Return : return a sum
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	return (sum);
}
