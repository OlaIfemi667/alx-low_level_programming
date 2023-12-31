#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -afiche tout
 * @format: list des formats
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separ = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separ, str);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
