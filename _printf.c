#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _printf - Print the arguments after format.
 * @format: String with some directives for the output.
 * Return: Number of printed characters.
 */
int _printf(char *format, ...)
{
	char *s, *copia_format;
	unsigned int i, j, count = 0, tam = 0, t = 0;
	va_list arg;

	va_start(arg, format);
	copia_format = _copy(format);
	tam = _count(copia_format);
	for (j = 0 ; j < tam; j++)
	{
	for (; copia_format[j] != '%' && copia_format[j] != '\0'; count++, j++)
		_putchar(copia_format[j]);
	j++, count++;
	if (copia_format[j - 1] == '\0')
		return (count - 1);
	switch (copia_format[j])
	{
	case 'c':
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
	case '%':
		_putchar('%');
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
