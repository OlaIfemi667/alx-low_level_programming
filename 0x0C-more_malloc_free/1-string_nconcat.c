#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - strlen
 * @s: the string
 * Return: length
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
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
	if (n >= _strlen(s2))
		n = _strlen(s2);
	p = malloc(sizeof(char) * (n + 1 + _strlen(s1)));
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
		p[_strlen(s1) + j] = s2[j];
		j++;
	}
	p[_strlen(s1) + j] = '\0';
	printf("%d", 55);
	return (p);
}
