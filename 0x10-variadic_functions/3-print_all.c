#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: list oftypes
 */
void print_all(const char * const format, ...)
{
	va_list type;
	char *str;
	int i = 0;
	int k = 0;

	va_start(type, format);

	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(type, int));
				k = 1;
				break;
			case 'i':
				printf("%d", va_arg(type, int));
				k = 1;
				break;
			case 'f':
				printf("%f", va_arg(type, double));
				k = 1;
				break;
			case 's':
				str = va_arg(type, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				k = 1;
				break;
		}
		if (format[i + 1] != 0 && k == 1)
			printf(", ");
		k = 0;
		i++;
	}
	printf("\n");


}
