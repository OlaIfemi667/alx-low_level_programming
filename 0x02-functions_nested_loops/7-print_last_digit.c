#include "main.h"

/**
 * print_last_digit - check the code
 * @a: number
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	if (a >= 0)
	{
		_putchar('0' + a % 10);
		return (a % 10);
	}
	else
	{
		int b = -a;
		_putchar('0' + b % 10);
		return (b % 10);
	}
}
