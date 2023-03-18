#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >= 0)
	{
		putchar(alphabet[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
