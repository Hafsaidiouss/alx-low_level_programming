#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: int
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n >= 0)
		return (_sqrt(n, 0));
	return (-1);
}
/**
 * _sqrt - unction that returns the natural square root of a number.
 * @n: int
 * @i: int
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n == 0)
		return (0);
	if (i == n)
		return (-1);
	if ((n - i) * (n - i) == n)
		return (n - i);
	return (_sqrt(n, i + 1));
}
