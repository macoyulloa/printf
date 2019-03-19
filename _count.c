#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _count - Calculates the size of a string.
  * @s: source string
  * Return: Return the size of a string
 */
int _count(char *s)
{
	int i;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
		}
		return (i);
	}
	return (0);
}
