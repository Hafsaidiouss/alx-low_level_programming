#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: Array of int
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else if (i == n - 1)
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}
