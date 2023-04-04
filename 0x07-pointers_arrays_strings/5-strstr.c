#include "main.h"
/**
 * _strstr -  function that locates a substring
 * @haystack: char
 * @needle: char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (*needle == 0)
		return(haystack);
	while (haystack[i] != 0)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			j = 0;
			while (needle[j] != 0)
			{
				if (haystack[k] == needle[j])
				{
					j++;
					k++;
				}
				else
					break;
			}
			if (needle[j] == 0)
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
