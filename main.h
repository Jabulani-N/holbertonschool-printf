
#ifndef main_h
#define main_h

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int spec_ctr(const char *stringIn);
int _putchar(char c);
int spchar(const char *format, ...);
int spcharStr(const char *format, char *inputString);
int spcharChar(const char *format, char inputChar);

#define NEXTUP (stringIn[magicalIndex + 1] ==)

/**
 *struct _specifier - holds specifier details
 *@specType: %i, %s, \n, \t, and so on
 *@inputString: if specType is %s, \n, \t, etc, we'll populate this
 *@inputChar: if specType is %c, we'll be populating this
 *@inputFloat: if specType is %f, we'll populate this
 *@inputInt: if specType is %i, we'll populate this
 *
 */

struct _specifier
{
	char specType, inputString, inputChar;
	float inputFloat;
	int inputInt;
	/* this holds specifier used, replacement text/numbers */

};

typedef struct _specifier spec;
/*this lets us shortcut declaratons of struct */

#endif


