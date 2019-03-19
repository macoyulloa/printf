#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * convert - Convert a number from any base to a string in 10 base.
 * @num: number to be converted.
 * @base: numeric base
 * Return: String with the number converted
 */
char *convert(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
