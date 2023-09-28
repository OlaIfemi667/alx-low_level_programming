#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string
 *
 * @s: the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
