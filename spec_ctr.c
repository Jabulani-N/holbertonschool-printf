
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
	int counted = 0, strlen = 0, magicalIndex = 0;

	printf("recieved input string of %s", stringIn);
	printf("spec_ctr is about to access the while loop\n");
	while (stringIn[magicalIndex] != '\0')
	{ printf("spec_ctr has run the while loop for measuring length %i times\n", (strlen + 1));
		printf("the current string value is %c(char)\n", stringIn[magicalIndex]);
		strlen++;
		magicalIndex++;
	}/*length acquired. we'll use it to index through the inpt and be able to ask what the next cahracter is*/

	for (magicalIndex = 0; magicalIndex < strlen - 1; magicalIndex++)/*the last char cannot be the start of a specifier*/
	{
		if (stringIn[magicalIndex] == '%')
		{/*see if next character makes it a specifier*/
			if (stringIn[magicalIndex + 1] == 'd' ||
					NEXTUP 'i'||/*make macro STRNOW for this if to the ==*/
					NEXTUP 's'||
					NEXTUP 'c')
				counted++;
		}
	}

	return (counted);
}

