

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
	int prinCount = 0, argCount;
	/*return prinCount at the end, dood*/
	/*
	 *we can get an editible version of the input by
	 * malloc the length of format(found by a separate strlen function)
	 * and then fill it with the contents of format
	 */
argCount = spec_ctr(format);
(void) argCount;
va_start (argList, format);

	/*
	 * if this is negative there was an error and we shoudl abort
	 *	therefore keep it signed
	 */

	while (*format)
	{
		if (*format != '\\' && *format != '%')
		{ /*normal character*/
			/*printf("printing normal character: %c\n", *format);*/
			_putchar(*format), prinCount++;
		}
		else
		{
			switch (*format)/*find if its slash or percent*/
			{
				case '\\':/*this is a single slash*/
					spchar(format);/*spchar can handle things like newlines*/
					format++;
					break;
			case '%':
					/*printf("we triggered the percent sign switch set\n");*/
				switch (*(format + 1))
				{
					case '%':/*double percent*/
						_putchar('%'), format++;
						break;
					case 'c':
						prinCount += spcharChar(format, va_arg(argList, int));
						/*this char gets promoted to int when passed, but it si still a char coordinate*/
						format++;
						break;
					case 's':
						prinCount += spcharStr(format, va_arg(argList, char*));
						format++;
						break;
				}
				break;

			}
		}
		format++;/*move to next charcter slot*/
	}
	_putchar('\0');/*(void) argList;*/
	va_end (argList);
	return (prinCount);
}

