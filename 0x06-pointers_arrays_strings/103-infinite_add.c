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
	if ((i - 1) % 2 != 0)
	{
		rev = *(s + (i - 1) / 2);
		*(s + (i - 1) / 2) = *(s + (i - 1) / 2 + 1);
		*(s + (i - 1) / 2 + 1) = rev;
	}
}
/**
 * *infinite_add - adds two numbers.
 * @n1: num 1
 * @n2 numm 2
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: somme
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;

	rev_string(n1);
	rev_string(n2);
	while (n1[i] != 0 && n2[i] != 0 && i < size_r)
	{
		if (i == size_r)
		{
			return (0);
		}
		if (r[i] + n1[i] +  n2[i] <= 9)
		{
			r[i] = r[i] + n1[i] +  n2[i];
		}
		else
		{
			r[i] = (r[i] + n1[i] +  n2[i]) / 10;
			r[i + 1] = 1;
		}
		i++;
	}
	if (n1[i] != 0)
	{
		while (n1[i] != 0)
		{
			if (i == size_r)
			{
				return (0);
			}
			r[i] = n1[i];
			i++;
		}
	}
	else
	{
		while (n2[i] != 0)
		{
			if (i == size_r)
			{
				return (0);
			}
			r[i] = n2[i];
			i++;
		}
	}
	rev_string(r);
	return (r);


}

