# printf
This has the files with the code of our firts project printf:
Files inside:
-Funtion filling the requirements of the project printf
-Holberton.h has the functions and library
-The main file

THE FUNCTION CREATED IN THIS REPOSITORY IS PRINTF

printf - format and print data

        #include "holberton.h"

        _printf FORMAT [ARGUMENT]...

DESCRIPTION OF THE FUNCTION

        Print ARGUMENT(s) according to FORMAT:

        FORMATS:

        %c : the argument is convert to an unsigned char and the resulting character is written. 
        %d : the argument of the variable, string, is writte in the space that is called and show it in the output. 
        %i : the int argument is conveted to signed decimal and print it.
        %d : the int variable is convert to a signed decimal and then is print it.

EXAMPLES OF THE USES
{
        char i = 'g';
        char j[] = "cadena de caracteres";
        char h = ' ';
        int n = 321, m = 245;

        _printf("Let's try to printf a simple sentence.\n");
	/**print a character, variable char type**/
        _printf("%c\n", i);
         /**print a string, variable char * type**/
        _printf("%s\n", j);
        /**more examples of the uses**/
        _printf("hola Male, %c, funcionó\n", i);
        _printf("hola mi nombre, %s, gracias\n", j);
        _printf("hola mi nombre, %c, gracias\n", h);
        /**print of number: integers and decimals numbers**/
        _printf("hola mi, %d , gracias\n", n);
        _printf("%d , gracias\n", m);
        _printf("%i\n", n);
        return (0);
}

