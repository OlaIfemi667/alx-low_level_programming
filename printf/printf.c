#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 */
char *find_c_or_s(const char *format)
{
	char *to_return;
	unsigned int i = 0, j = 0, k = 0, l = 0, len = 0;

	while(format[len] != '\0')
	{
		len++;
	}
	while (format[l] != '\0')
	{
		if((format[l] == '%') && (k < (len - 1)))
			k++;
		l++;
	}
	/*printf("%d", len);*/
	to_return = malloc(sizeof(char) * (k + 1));

	while (format[i] != '\0')
	{
		if ((format[i] == '%') && (i < (len - 1)))
		{
			if (format[i + 1] == 'c')
			{
				to_return[j] = 'c';
				j++;
			}
			if (format[i + 1] == 's')
			{
				to_return[j] = 's';
				j++;
			}
			/*putchar('a');*/
		}
		/*putchar('b');*/
		i++;
	}
	/*putchar('c');*/
	to_return[j] = '\0';
	return (to_return);
}

/**
 */
int _printf(const char *format, ...)
{
	const char *inter = format, *convert_format;
	va_list ap;
	int i = 0, j = 0, len = strlen(inter);

	convert_format = find_c_or_s(inter);
	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (inter[i] != '%')
			putchar(format[i]);
		if ((inter[i] == '%') && (i < (len - 1)))
		{
			if (inter[i + 1] == convert_format[j] && convert_format[j] == 'c')
			{

			}
			if (format[i + 1] == 's')
			{

			}
			j++;
			/*putchar('a');*/
		}
		/*putchar('b');*/
		i++;
	}
	va_end(ap);
	return (0);
}
