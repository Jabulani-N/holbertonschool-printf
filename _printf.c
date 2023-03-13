

/**
 * _printf - prints f(ormatted text)
 * @format: the input text that will be printed.
 *	includes specifier
 * Return: number of characters printed
 */


#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	char input;
	/*
	 *we can get an editible version of the input by
	 * malloc the length of format(found by a separate strlen function)
	 * and then fill it with the contents of format
	 */
	int argCount = spec_ctr(format);

	printf("_printf recieved an argument count of %i\n ", argCount);
	/*
	 * if this is negative there was an error and we shoudl abort
	 *	therefore keep it signed
	 */

	(void) ap;
	(void) input;
	return (99);
}
