#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_binary - verifier if is binary
 * @b: chaine binaire
 * Return: 0 ou 1
 */

unsigned int is_binary(const char *b)
{
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
/**
 * _pow_two - puissance 2
 * @d: pow
 * Return: result
 */
unsigned int _pow_two(unsigned int d)
{
	unsigned int n = 1, i;

	for (i = 0; i < d; i++)
		n *= 2;
	return (n);
}
/**
 * binary_to_uint - binaire en entier
 * @b: la chaine binaire
 * Return: 0 ou convertion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, i, j;

	if ((b == NULL) | (is_binary(b) == 0))
		return (0);
	i = strlen(b) - 1;
	j = 0;
	while (j < strlen(b))
	{
		if (b[i] == '0')
			converted += 0 * _pow_two(j);
		if (b[i] == '1')
			converted += 1 * _pow_two(j);
		i--;
		j++;
	}
	return (converted);
}
