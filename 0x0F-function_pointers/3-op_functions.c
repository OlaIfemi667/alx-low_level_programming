#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition
 * @a: terme1
 * @b: terme2
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustraction
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Produit
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division entiere
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - reste de la division de a par b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

