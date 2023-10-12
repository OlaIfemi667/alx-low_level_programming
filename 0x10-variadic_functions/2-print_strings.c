#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
 * print_strings - afficher les strings
 * @separator: le separateur
 * @n: nombre de strings passé en arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *passage;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0 ; i < n; i++)
		{
			passage = va_arg(ap, char *);
			if (passage == NULL)
				passage = "(nil)";
			printf("%s", passage);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			passage = va_arg(ap, char *);
			if (passage == NULL)
				passage = "(nil)";
			if (i == n - 1)
				printf("%s", passage);
			else
				printf("%s%s", passage, separator);
		}
		printf("\n");
	}
}
