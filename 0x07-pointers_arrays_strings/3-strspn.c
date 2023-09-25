#include "main.h"
#include <stdio.h>

/**
 * _strspn - copy buffer in hexa
 * @s:string
 * @accept: character to check
 * Return:to return
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, compter, to_return;

	to_return= 0;

	for (i = 0 ; s[i] >= '\0' && compter == 0; i++)
	{
		compter = 0;
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				compter++;
			}
		}
		if (compter > 0)
		{
			to_return++;
		}
		else
		{
		}
	}
	return (to_return);
}
