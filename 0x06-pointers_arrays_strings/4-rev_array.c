#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of int
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i;
	int k = 0;

	for (i = 0; i < n / 2; i++)
	{
		k = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = k;
	}

}
