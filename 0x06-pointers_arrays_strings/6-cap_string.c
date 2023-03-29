#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: string
 * Return: return char
 */
char *cap_string(char *str)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";
	int j = 0;

	for (i = 0; str[i] != 0; i++)
	{
		while (j < 13)
		{
			if (str[i] == sep[j])
			{
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i + 1] = str[i + 1] - 97 + 65;
				}
				j = 12;
			}
			j++;
		}
	}
	return (str);
}
