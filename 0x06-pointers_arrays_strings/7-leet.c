#include "main.h"
/**
 * *leet -  function that encodes a string into 1337.
 * @str: string
 * Return: char
 */
char *leet(char *str)
{
	char l[] = "aAeEoOtTlL";
	int n[] = {4,4,3,3,0,0,7,7,1,1};
	int i = 0;
	int j;

	while (str[i] != 0)
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == l[j])
			{
				str[i] = '0' + n[j];
				j = 9;
			}
			j++;
		}
		i++;
	}
	return (str);
}
