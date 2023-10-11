#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - afficher nom
 * @name: name toprint
 * @f: the function to print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
