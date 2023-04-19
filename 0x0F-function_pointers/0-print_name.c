#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - print name
 * @name: name
 * @f: pointer to a fonction
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
