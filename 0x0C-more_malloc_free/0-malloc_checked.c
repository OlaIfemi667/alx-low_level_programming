#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - check malloc
 * @b: the size wanted
 * Return: return pointeur
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
