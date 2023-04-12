#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checke -  function that allocates memory using malloc
 * @b: inti
 */
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);
	if (v == NULL)
		exit(98);
	return (v);
}

