#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * spchar - writes the special cases argument to standar out via putchar
 * @first: either % or \. determines the next output
 * @second: the second half of specifier. can be [disc] or %/\
 * Return: On success the number of printed characters
 * - for the base function to add to it's counter variable.
 * On error, -1 is returned, and errno is set appropriately.
 */


/*
 * structure that holds all the types
 * we'll initialize wit hall slots void
 * decide which slot via switch determined by specifier
 * if it's not a specifier, we'll just print the character and return success
 * if it is a specifier,
 * then we'll fill the appropriate slot with the 1 variadic arg
 *
 * finally, we'll print all the contents of the structure in sequeence(?)
 * the only thing that will get sent is the one with actual content: the variadic argument
 *
 */

/*
 *the structure has slot for
 * specType, inputString, inputChar
 * inputFloat, inputInt
 */


/*sorting in _printf, since spchar can't handle the variadic part*/
/*this one handles slash operations*/
int spchar(const char *format, ... )
{
	va_list varInput;
	int charsPrinted = 0;
	/*get variadic list so we can judge the variadic input in the switch*/
	spec *input;
	
	input = malloc (sizeof(spec));
	if (input == NULL)
	{
		printf("structure was null because we didn't start it with values\n");
		return (-1);
	}

	va_start (varInput, format);/*the second argument here is meant to be the type of the next arg*/
	/*due to this, we can jsut make a different function for each type, that way we know the type*/
	/*started with a slash*/
	switch (*(format + 1))
			{
				case '\\':/*followed by another single slash*/
					input->specType = 'c', input->inputChar = '\\', format++;
					break;
				case 'n':
					input->specType = 'c', input->inputChar = '\n', format++;
					break;
				case 't':
					input->specType = 'c', input->inputChar = '\t', format++;
					break;
			}
	/*after filling the relevant spot in input, putchar through all slots*/
	switch (input->specType)
	{
		case 'c':
			_putchar(input->inputChar), charsPrinted++;
			break;
	}
va_end (varInput);
return (charsPrinted);
}



/*
 * int spcharInt (const char *format, int inputInt)
*{
*}
*
*int spcharDec (const char *format, float inputDec)
*{
*}
*/
int spcharChar (const char *format, char inputChar)
{
	/*printf("spcharChar was triggered\n");*/
	if (!inputChar)
	{
		/*printf("aborted via null inputChar\n");*/
		return (-1);
	}
	_putchar(inputChar);
	format++;
	return (1);
}

int spcharStr (const char *format, char *inputString)
{
	int prinSubCount = 0;

	/*printf("spcharStr was triggered\n");*/
	if (!*inputString)
	{
		/*printf("aborted via null inputStrin\n");*/
		return (-1);
	}

	while (*inputString)
	{
		_putchar(*inputString);
		prinSubCount++;
		inputString++;
	}
	format++;

return (prinSubCount);
}
/*
 *				potential traps
 * make sure all specifiers do a single format++
 * 	this is so we move from /d's '/' to wahtever's past it's 'd'
 *
 * 	in order to know the input type, well need ot have the base spcahr function call dedicated functions for each type
 */

