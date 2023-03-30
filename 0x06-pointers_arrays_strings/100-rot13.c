#include "main.h"
/**
 * *rot13 - ncodes a string using rot13.
 * @str : string to encode
 * Return: char
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] + 13 <= 'Z')
			{
				str[i] = str[i] + 13;
			}
			else
			{
				str[i] = 'A' + str[i] + 12 - 'Z';
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] + 13 <= 'z')
			{
				str[i] = str[i] + 13;
			}
			else
			{
				str[i] = 'a' + str[i] + 12 - 'z';
			}
		}
		i++;
	}
	return (str);
}
