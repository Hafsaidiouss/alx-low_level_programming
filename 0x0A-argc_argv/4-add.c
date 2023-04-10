#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * isnumber - check if char is number
 * @s: char
 * Return: 1 if number 0 if not
 */
int isnumber(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (isdigit(s[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
/**
 * main - main fonction
 * @argc: number of argument
 * @argv: vector of argument
 * Return: int
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isnumber(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
