

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
	int argCount = spec_ctr(*format), printf("we recieved an argument count of %i\n ", argCount);
	/*
	 * if this is negative there was an error and we shoudl abort
	 *	therefore keep it signed
	 */
}
