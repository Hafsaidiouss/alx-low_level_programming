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
	int c = 0;
	int j;
	int r;
	int list[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = atoi(argv[1]);
		for (j = 0; j < 5; j++)
		{
			if (r >= list[j])
			{
				c = c + r / list[j];
				r = r - list[j] * (r / list[j]);
			}
		}
		printf("%d\n", c);
	}
	return (0);
}
