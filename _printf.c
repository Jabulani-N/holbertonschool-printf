#include "main.h"
#include <stdlib.h>
/**
 *specifiercheck - specifier that is checked if it's valid
 *@format: format specifier
 *Return: pointer to valid function or NULL
 */

int (*specifiercheck(const char *format))(va_list)
{
	unsigned int i;
	specifier p[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	/* protect against null format */
	if (!format)
		exit(99);
	for (i = 0; p[i].spec != NULL; i++)
	{
		if (*(p[i].spec) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

