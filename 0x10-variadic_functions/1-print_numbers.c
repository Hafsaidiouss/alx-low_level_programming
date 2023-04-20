#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - that prints numbers, followed by a new line.
 * @separator: char
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (n != 0)
		va_start(numbers, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
}
