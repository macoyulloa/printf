#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - imprimir argumentos.
 * @format: argumentos.
 * Return: int.
 **/
int _printf(const char *format, ...)
{	va_list variable;
	int i = 0, j = 0, leng = 0, a = 0;
	char print[10200], *p, n = '\0', s = '\n';

	va_start(variable, format);
	if (format == NULL)
		return (-1);
	for (; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{	a = va_arg(variable, int);
				if (a == n)
					print[leng] = n;
				else if (a == s)
					print[leng] = s;
				else
					print[leng] = a;
				leng++;
			}
			else if (format[i + 1] == 's')
			{	p = va_arg(variable, char *);
				for (; p[j] != '\0'; j++, ++leng)
					print[leng] = p[j];
			}
			else if (format[i + 1] == '%')
			{	print[leng] = '%';
				leng++;
			}
			i++;
		}
		else
		{	print[leng] = format[i];
			leng++;
		}
	}
	va_end(variable);
	return (write(1, print, leng));
}
