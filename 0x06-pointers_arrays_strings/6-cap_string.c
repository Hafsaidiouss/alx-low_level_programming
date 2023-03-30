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

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 97 + 65;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			j = 0;
			while (j < 13)
			{
				if (str[i - 1] == sep[j])
				{
					str[i] = str[i] - 97 + 65;
					j = 12;
				}
				j++;
			}
		}

	}
	return (str);
}
