#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main fct
 * Return: int
 */
int main (int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n",(get_op_func(argv[1]))(atoi(argv[0]), atoi(argv[2])));
	return (0);
}
