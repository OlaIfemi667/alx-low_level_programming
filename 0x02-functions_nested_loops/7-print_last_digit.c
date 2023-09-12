#include "main.h"

/**
 * print_last_digit - check the code
 * @a: number
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -a;
	}
	_putchar('0' + a % 10);
	return (a % 10);

}
