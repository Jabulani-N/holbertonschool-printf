#Requirements

return int numberOfCharactersPrinted 

- doesn't count terminating null

#Operation

We'll need to do a couple things to create printf



Because the _printf function will send for many other funcitons, give it a thing where if it gets back a -1(or other error) it instantly frees everyting and returns error



_printf function ("input string",argument1,whine2,complaint3,etc)

- validate input arguments

- - count and make sure we have same number of specifiers and arguments to fill them

- - - counting funciton: 

- - if there are specifiers to request formatting, make sure the varible we put there is valid (%i actually gets an int arguemnt)

- - - this may be done via a new function that receives the specifier and the variable that goes in that slot

- - - - if they do not match, return error

- - - - if they do match

- - - - - say everything's cool. carry on.

- - now that we know all specifiers are valid, function to allocate

- - - Does not care what the actual contents are, it only wants to make sure we can succeessfully malloc

- - - malloc based on starting characters, subtract character value per specifier, add specifier type * length of string/etc, subtract 1 string length for %% and // because they create only one character + 1(for terminating null)

- - - if it succeeds, _printf can carry on to the next step, and can record the location of the malloc'd memory



_printf, now that we know all specifiers are valid, and we have allocated memory for the output string

- save the output string's address we got from malloc'd function, as a variable

- function that
		while(input string [index])

			if (input string [index] is not % or \)

				_putchar

				move to next character
			else

				if (there is a character after it)


					send current and next character to special character handler

				else [if this triggers, that means it just ended on a % or \, and we cna print it normally]

					_putchar

- special character handler (char %||\, char nextCharacter, specifierCount[shared with above funciton via pointer; which specifier we are on, like first, second, etc])

- - switch case (or typedef? we are required to have a typedef in this assignment) for if the %||\ + nextCharacter combo denotes a specifier. case for each one so we can output properly

- - - get the specifierCount'th input variable, and increase specifierCount, and increase above function's index an additional space when we're done

- - - - _putchar

- - if it is \\ or %%, make the above function skip the next character by increasing it's index by an additional number

- - if it is none of the special characters, just putchar the %||\ and let the above function handle the subsequent characters


#Where to Start

first, let's build the basic function that calls another function to spam _putchar through the entire input, not counting the subsequent arguments (you can do something like void unused_vars to skip the parts we haven't used yet)

- basically pretending the entire thing was a single string with no special characters.

- this way we know we can print properly, and can use it for our (if not a special character) case



We can create funtions for those special cases as we get to those steps(?) 

----
----

#Potenitial Macros


exampleMacroName

- description of what  exampleMacroName does


solution

- return error

- if cuntion-like macros are flexuble enough, have it free them here, instead of in new commands

- - this is unlikely, as there will be different numebrs of allocated things
