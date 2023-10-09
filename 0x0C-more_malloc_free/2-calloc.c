#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - set  buffer in hexa
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: on what i will remplacee
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - array allocation_memory
 * @nmemb: nombre de membre
 * @size: la taille
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	_memset(p, 0, nmemb);

	return (p);
}
