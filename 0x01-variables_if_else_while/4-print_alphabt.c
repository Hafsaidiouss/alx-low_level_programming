#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (alphabet[i] == 'q' || alphabet[i] == 'e')
		{
			i++;
		}
		else
		{
			putchar(alphabet[i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}

