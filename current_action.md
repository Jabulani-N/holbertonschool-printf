for now, let's review how to make a structure.

we'll want a structure type that holds both the specifier adn the text that replaces it

- it may have to have a slot for each valid data type, and then only fill the relevant ones.

- have a slot to hold it's output string as well

we'll use it by declaring it early.

- then malloc the space needed once we've counted the number of specifiers


#Structure created! Good job~~~♪

We can work on the sorting function now.

It'll recieve as argument the input text and one variable's contents (use variatic to allow any format)

with these two, populate the structure first. 

- chose which field to populate based on first case of %[disc] that does not have a %/\ in front of it

- - it's not that simple.

- - - %%%d needs to replace with decimal

- - - %%d does not.

- - - \%\\%\%d is an invalid input because of %\.

then, replace the first case of a specifier with the variatic contents



