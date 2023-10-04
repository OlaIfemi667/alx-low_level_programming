#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenation
 * @s1: string no1
 * @s2: string no2
 * Return: total string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i_s1 = 0, i_s2 = 0, i = 0, j = 0;
	char *theconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i_s1] != '\0')
		i_s1++;
	while (s2[i_s2] != '\0')
		i_s2++;
	theconcat = malloc(sizeof(char) * (i_s1 + i_s2 + 1));

	if (theconcat == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		theconcat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		theconcat[i_s1 + j] = s2[j];
		j++;
	}
	theconcat[i_s1 + j] = '\0';

	return (theconcat);
}
