#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"

/**
 * print_numbers - afficher les nombres
 * @separator: le separateur
 * @n: nombre de entier passé en arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0 ; i < n; i++)
			printf("%d", va_arg(ap, int));
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
		printf("\n");
	}
}
