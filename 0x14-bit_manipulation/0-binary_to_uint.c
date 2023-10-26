#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * is_binary - verifier if is binary
 * @b: chaine binaire
 * Return: 0 ou 1
 */

unsigned int is_binary(const char *b)
{
	while (*b != '\0')
		if (b != '1' && b != '0')
			return (0);
	return (1);
}
 /**
 * binary_to_uint - binaire en entier
 * @b: la chaine binaire
 * Return: 0 ou convertion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, i = 0;

	if (b == NULL | is_binary(b) == 0)
		return (0);
	while (b[i] != '\0')
		converted += unsigned int(b[i]) * pow(2, i);
	return (converted);
}
