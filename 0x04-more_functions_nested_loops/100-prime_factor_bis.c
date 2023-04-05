#include <stdio.h>
#include <math.h>
/**
 * isprime - check if num is prim
 * @n: int
 * Return: 0 or 1
 */
int isprime(long int n)
{
	long int i;

	for (i = 2; i < sqrt(n); i++)
	{
		if ( n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - main entry point
 * Return: int
 */
int main(void)
{
	long int i = 2;
	long int n;
	
	n = 612852475143;
	while (i < n)
	{
		printf("i is %ld n is %ld\n", i, n);
		if ( n % i == 0)
		{
						
				printf("i is prime %ld\n", i);
				n = n / i;
				if (isprime(n))
				{
					printf("n is prime %ld\n", n);
					printf("%ld\n", n);
					break;
				}
				i = 1;
			
		}
		i++;
	}

	return (0);
}
