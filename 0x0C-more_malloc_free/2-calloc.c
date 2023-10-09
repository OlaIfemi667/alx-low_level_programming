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
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

