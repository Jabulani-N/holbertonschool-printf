# holbertonschool-printf
Practical exercise in collaboration and function creation

note printf will actually accept spaces between specifier % and letter.

- handle that

#Potential errors and solutions


* initialization discards ‘const’ qualifier from pointer target type

- you need to make the pointer or whatever is copying it a constant to.

- - you cannot change the content of what a const pointer is pointing to

- - you can use strstr or a string copying function to get a variable char
