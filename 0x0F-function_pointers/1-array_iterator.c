#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - unction that executes a function given as a parameter on e
 * @array: array
 * @size: size
 * @action: pointer to a fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
