#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - print a string
 *
 * @s: the string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *p = '\0';

	p = malloc(sizeof(char));
	if (*s != '\0')
	{
		p--;
		*p = *s;
		s++;
		_print_rev_recursion(s);
	}
	if (*p != '\0')
		_putchar(*p);
}
