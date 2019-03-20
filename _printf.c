#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _printf - Print the arguments after format.
 * @format: String with some directives for the output.
 * Return: Number of printed characters.
 */
int _printf(char *format, ...)
{	char *s, *copia_format;
	unsigned int i, j, a = 0, count = 0, tam = 0, t = 0;
	va_list arg;

	va_start(arg, format);
	tam = _count(copia_format = _copy(format));
	if (format == NULL)
		return (-1);
	for (j = 0 ; j < tam; j++)
	{
	for (; copia_format[j] != '%' && copia_format[j] != '\0'; count++, j++)
		_putchar(copia_format[j]);
	j++, count++;
	if (copia_format[j - 1] == '\0')
		return (count - 1);
	switch (copia_format[j])
	{ case 'c':
	i = va_arg(arg, int);
		_putchar(i);
		count++;
		break;
	case 's':
	s = va_arg(arg, char *);
		t = _count(s);
		imp(s);
		count = count + t;
		break;
	case 'i':
	case 'd':
	a = va_arg(arg, int);
		if (a < 0)
		{
			a = -a;
			_putchar('-');
			count++;
		}
		t = _count(convert((unsigned int)a, 10));
		imp(convert(a, 10));
		count = count + t;
		break;
	case '%':
		_putchar('%');
		count++;
		break;
	default:
		if (copia_format[j - 1] == '%' && copia_format[j] != '\0')
			_putchar('%');
		_putchar(copia_format[j]);
		count++;
		break;
	}
	}
	va_end(arg);
	return (count);
}
