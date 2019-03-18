#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char i = 'g';
	char j[] = "cadena de caracteres";
	char h = ' ';
	int n = 321, m = 245;

	_printf("Let's try to printf a simple sentence.\n");
	_printf("%c\n", i);
 	_printf("%s\n", j);
	_printf("hola Male, %c, funcionó\n", i);
	_printf("hola mi nombre, %s, gracias\n", j);
	_printf("hola mi nombre, %c, gracias\n", h);
	_printf("hola mi, gracias\n", h);
	_printf("Hola maria%\n");
	/**printf("Hola maria%\n");**/
	_printf("hola mi, %d , gracias\n", n);
	_printf("hola mi, %i , gracias\n", m);
	_printf("%d , gracias\n", m);
	_printf("%i\n", n);
	return (0);
}
