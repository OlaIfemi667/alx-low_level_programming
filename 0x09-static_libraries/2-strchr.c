#include "main.h"
#include <stdio.h>

/**
 * _strchr - copy buffer in hexa
 * @s:string
 * @c: char to find
 * Return: pointeur
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
