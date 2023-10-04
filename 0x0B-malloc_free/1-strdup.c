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
	unsigned int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		dupplicate = malloc(sizeof(str));

		if (dupplicate == NULL)
		{
			return (NULL);
		}
		else
		{
			while (str[i] != '\0')
			{
				dupplicate[i] = str[i];
				i++;
			}
		}
	}
	dupplicate[i] = '\0';
	return (dupplicate);
}

