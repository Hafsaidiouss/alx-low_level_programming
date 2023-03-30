#include "main.h"
/**
 * *rot13 - ncodes a string using rot13.
 * @str : string to encode
 * Return: char
 */
char *rot13(char *str)
{
	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j;

	while (str[i] != 0)
	{
		j = 0;
		while (j < 54)
		{
			if (str[i] == l[j])
			{
				str[i] = n[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
