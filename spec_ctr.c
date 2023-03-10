
/**
 * spec_ctr - counts the numebr of printf specifiers in the input string
 *
 * @stringIn: count the specifiers within
 *
 * Return: number of specifiers found.
 *	signed so we can return -1 on error
 *
 */

#include <stdio.h>

int spec_ctr(char *stringIn)
{
	int counted = 0, strlen = 0;
	void inputAddress = stringIn;

	while (*stringIn)
	{
		strlen++;
		stringIn++;
	}/*length acquired. we'll use it to index through the inpt and be able to ask what the next cahracter is*/
	
	stringIn = inputAddress

	return (counted);
}

