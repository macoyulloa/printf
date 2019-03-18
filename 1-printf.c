#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - imprimir argumentos.
 * @format: argumentos.
 * Return: int.
 */
int _printf(const char *format, ...)
{
	va_list variable;
	int i = 0, j = 0, k = 0, leng = 0, a = 0, num = 0;
	char print[1024];
	char *p;

	va_start(variable, format);
	for (; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				a = va_arg(variable, int);
				print[leng] = a;
				leng++;
			}
			else if (format[i + 1] == 's')
			{
				p = va_arg(variable, char *);
				for (; p[j] != '\0'; j++, ++leng)
					print[leng] = p[j];
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				num = va_arg(variable, int);
				print[leng] = num;
				leng++;
			}
		i++;
		}
		else
		{
			print[leng] = format[i];
			leng++;
		}
	}
	va_end(variable);
	return (write(1, print, leng));
}
