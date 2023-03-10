#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * 
 *
 */

typedef struct print
{
	char *spec;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...)
int print_char( va_list c);
int print_int(va_list i);
int print_string(va_list s);
#endif
