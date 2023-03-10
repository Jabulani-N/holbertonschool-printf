

/**
 *
 * _printf - prints f(ormatted text)
 *
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
	char input = *format;
	int argCount = spec_ctr(&input);
	printf("_printf recieved an argument count of %i\n ", argCount);
	/*
	 * if this is negative there was an error and we shoudl abort
	 *	therefore keep it signed
	 */

	(void) ap;
	return (99);
}
