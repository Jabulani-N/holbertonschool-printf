

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
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list argList;
	/*
	 *we can get an editible version of the input by
	 * malloc the length of format(found by a separate strlen function)
	 * and then fill it with the contents of format
	 */


	/*
	 * if this is negative there was an error and we shoudl abort
	 *	therefore keep it signed
	 */

	while (*format)
	{
		if (*format != '\\' || *format != '%')
		{ /*normal character*/
			_putchar(*format);
		}
		format++;
	}

	/*(void) argList;*/
	va_end (argList);
	return (99);
}
