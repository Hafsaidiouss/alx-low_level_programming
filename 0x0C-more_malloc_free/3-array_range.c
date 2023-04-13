#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}

	return (array);
}
