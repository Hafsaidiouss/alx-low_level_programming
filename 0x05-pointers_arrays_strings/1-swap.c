#include "main.h"
/**
 * swap_int - swap the value of two int
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
