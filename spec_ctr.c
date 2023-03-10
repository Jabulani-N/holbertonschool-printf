
/**
 * spec_ctr - counts the numebr of printf specifiers in the input string
 *
 * @stringIn: count the specifiers within
 *
 * Return: number of specifiers found.
 *	signed so we can return -1 on error
 *
 */

#include <string.h>
#include <stdio.h>
#include "main.h"


int spec_ctr(const char *stringIn)
{
	int counted = 0, strlen = 0, index = 0;
	const void *inputAddress = &*stringIn;

	printf("spec_ctr is about to access the while loop\n");
	while (*stringIn)
	{ printf("spec_ctr has run the while loop for measuring length %i times\n", (strlen + 1));
		strlen++;
		stringIn++;
	}/*length acquired. we'll use it to index through the inpt and be able to ask what the next cahracter is*/
	stringIn = inputAddress;

	for (index = 0; index < strlen - 1; index++)/*the last char cannot be the start of a specifier*/
	{
		if (stringIn[index] == '%')
		{/*see if next character makes it a specifier*/
			if (stringIn[index + 1] == 'd' ||
					NEXTUP 'i'||/*make macro STRNOW for this if to the ==*/
					NEXTUP 's'||
					NEXTUP 'c')
				counted++;
		}
	}

	stringIn = inputAddress;
	return (counted);
}

