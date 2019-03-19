#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
* _copy - Copy a string
* @src: source string
* Return: Returns a pointer to the new string
*/
char *_copy(char *src)
{
	int i, tam = 0;
	char *new_str;

	tam = _count(src);
	if (tam > 0)
	{
		new_str = malloc(sizeof(char) * (tam + 1));

		if (new_str == NULL)
		{
			free(new_str);
			return (NULL);
		}
		for (i = 0; i < tam; i++)
			new_str[i] = src[i];
		new_str[i] = '\0';
		return (new_str);
	}
	return (NULL);
}
