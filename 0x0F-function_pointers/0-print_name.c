#include <stdio.h>
#include <stdlib.h>
/**
 * f - afficher le parametre
 * @message: le message
 * Return: pointer
 */

void f(char *message)
{
	printf("%s\n");
}

/**
 * print_name - afficher nom
 * @name: name toprint
 * @f: the function to print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
