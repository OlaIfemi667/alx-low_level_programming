#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - pour dupliquer
 * @str: le string a dupliqué
 *Return: pointer,NULL
 */
char *_strdup(char *str)
{
	char *dupplicate;
	unsigned int i, r = 0;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	
	else
	{
		while (str[i] != '\0')
			i++;
		dupplicate = malloc(sizeof(char) * (i + 1));

		if (dupplicate == NULL)
		{
			return (NULL);
		}
		else
		{
			for (r = 0; str[r]; r++)
				dupplicate[r] = str[r];
		}
	}
	return (dupplicate);
}

