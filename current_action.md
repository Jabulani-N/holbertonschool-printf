for now, let's review how to make a structure.

we'll want a structure type that holds both the specifier adn the text that replaces it

- it may have to have a slot for each valid data type, and then only fill the relevant ones.

- have a slot to hold it's output string as well

we'll use it by declaring it early.

- then malloc the space needed once we've counted the number of specifiers


# Structure created! Good job~~~♪

We can work on the sorting function now.

we'll need a pointable variable that keeps out position, or we'll need to be able to *format++ to change positions

let's start with 

			while (*format)
				if (*format is a normal character, putchar)


---


# basic text is handled. excellent work.

now we want to send the "else" to a function that handles special characters

we'll send *format (the current character,) *(format + 1) (the next character, address or pointer to current count of printed characters (so it can add) and argList (current argument. automatically incriments)

- it needs both current and next char so it can differentiate between / and %

- - we could just use *(inputterFormat + 1) to move to the next character

- it'll return the number of characters printed, so we can directly add it in _printf.c

# mostly done

right now, it's not triggering the right special cahracter handlers

- check _printf and make sure it sends to the correct funcitons

# I fixed it!

it was using "not percent || not slash" when it needed to be "not percent and not slash" to say the "while neither" I needed.

now, let's have it handle slash commands

# we may not have to

our next move should be to betty comply

create a macro for some bigger chunks of code, if we have waaay too many lines

