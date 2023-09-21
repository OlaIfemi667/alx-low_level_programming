#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *final_dest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (final_dest);
}
