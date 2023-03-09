

We'll need to do a couple things to create printf

base program may hold calls to

- function that handles normal characters (not %,\\)

- function that handles special characters

- - if it will be printed like a normal character, send it to the function that handles normals


