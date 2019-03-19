#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * imp - Concatenates *src into dest from position n.
 * @s: source string
 * Return: Retunr the number of copied characters
 */
void imp(char *s)
{
	int i;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
	}
}
