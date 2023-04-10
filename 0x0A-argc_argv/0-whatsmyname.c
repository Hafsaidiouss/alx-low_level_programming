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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
