#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * spchar - writes the special cases argument to standar out via putchar
 * @specifier: determines input type
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int spchar(char specifier, ... )
{
	spec input;
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
}


