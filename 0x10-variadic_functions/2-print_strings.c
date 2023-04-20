#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - that prints numbers, followed by a new line.
 * @separator: char
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	if (n != 0)
		va_start(string, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(string, char *);
			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
}

