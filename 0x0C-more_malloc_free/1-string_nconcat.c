#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenation de deux strings
 * @s1: first string
 * @s2: second string
 * @n: number of bite
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	p = malloc(sizeof(char) * (n + 1 + strlen(s1)));
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		if (j == n)
			return (p);
		p[strlen(s1) + j] = s2[j];
		j++;
	}
	p[strlen(s1) + j] = '\0';
	return (p);
}
