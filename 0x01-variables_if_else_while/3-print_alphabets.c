#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetmin[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetmaj[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j = 0;
	int i = 0;

	while (i < 26)
	{
		putchar(alphabetmin[i]);
		i++;
	}
	while (j < 26)
	{
		putchar(alphabetmaj[j]);
		j++;
	}
	putchar('\n');
	return (0);
}
