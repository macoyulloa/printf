#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _strncat_alt - Concatenates *src into dest from position n.
 *
 * @dest: destination string
 * @src: source string
 * @n: position
 * Return: Retunr the number of copied characters
 */
char* _strncat_alt(char *dest, char *src, int n)
{
	int i, tam_src;

	printf("\nCadena recibida =%s, Dir cadena recibida = %p\n",src, &src);
	for (tam_src = 0 ; src[tam_src] != '\0' ; tam_src++)
	{
	} /* Calculates the size of the source string */

	for (i = 0 ; i < tam_src ; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}

/**
* _copy - Copy a strin into another string.
*
* @src: source string
* Return: Return the new string
*/

char *_copy(char *src)
{
	int i, tam;
	char *new_str;

	for (tam = 0; src[tam] != 0; tam++)
	{
	}

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

/**
 * convert - Convert a number from any base to a string in 10 base.
 * @num: number to be converted.
 * @base: numeric base
 * Return: String with the number converted
 */
char *convert(unsigned int num, int base)
{
	char Representation[] = "0123456789ABCDEF";
	char buffer[33];
	char *ptr;
int a;

	ptr = &buffer[32]; 	/* Go to the end */
	*ptr = '\0';		/* Close the string */

	do
	{	/*From back to the beggining it will save each #*/
		*--ptr = Representation[num % base];
		num /= base; 
	} while (num != 0);

	for (a = 0; ptr[a] != '\0'; a++)
		printf("[%d]=%c", a, ptr[a]);
	printf("\n Tam = %d\n, Ptr = %s \n", a, ptr);
	return(ptr);
}

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
	char *p, *cad_tmp;

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
				num = va_arg(variable, int); //get a int number
				cad_tmp = convert(num, 10);//convert a # in a base to # in 10 base (and string
				printf("Cad tmp = %s, Dir Cad tmp = %p \n",cad_tmp, &cad_tmp); //verifying string
				 _strncat_alt(print, cad_tmp, leng); //concatenate cad_tmp into print in pos leng
				leng = leng + k;
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
