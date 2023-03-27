#include "main.h"
/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	char rev;
	int j;

	while (*(s + i) != 0)
	{
		i++;
	}
	for (j = 0; j < (i - 1) / 2; j++)
	{
		rev = *(s + j);
		*(s + j) = *(s + i - 1 - j);
		*(s + i - 1 - j) = rev;
	}
}
