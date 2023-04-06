#include "main.h"
int div(int n, int i);
/**
 * is_prime_number -  function that returns 1 if the input integer is a prime
 * @n: int to check
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if (div(n, 2) == n)
		return (1);
	return (0);
}
/**
 * div - find a div
 * @n: int
 * @i: int
 * Return: div
 */
int div(int n, int i)
{
	if (n % i == 0)
		return (i);
	return (div(n, i + 1));
}
