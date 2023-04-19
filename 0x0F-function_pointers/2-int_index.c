#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - Write a function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: int
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	if (size < 0)
		return (-1);
	return (-1);
}
