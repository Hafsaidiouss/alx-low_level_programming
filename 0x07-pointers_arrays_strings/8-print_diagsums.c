#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: int
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 = d1 + *(a + size * i + i);
		d2 = d2 + *(a + size * i + size - i - 1);
	}
	printf("%d, %d\n", d1, d2);
}
