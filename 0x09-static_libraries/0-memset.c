#include "main.h"
#include <stdio.h>

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
