#include <stdlib.h>
#include <stdio.h>
/**
 * main - main fonction
 * @argc: number of argument
 * @argv: vector of argument
 * Return: int
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
