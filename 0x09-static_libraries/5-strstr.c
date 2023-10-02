#include "main.h"
#include <stdio.h>
/**
 * _strstr - copy buffer in hexa
 * @haystack: string
 * @needle: character to find
 * Return:to return
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *second = needle;
		char *premier = haystack;

		while (*premier == *second && *second != '\0')
		{
			premier++;
			second++;
		}

		if (*second == '\0')
			return (haystack);
	}
	return (NULL);
}
