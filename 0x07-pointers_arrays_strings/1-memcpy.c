#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy buffer in hexa
 * @src: source
 * @n: the size of the memory to copy
 * @dest: destination
 * Return: pointeur
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
