#!/bin/bash
# A script to create a static library called liball.a from all .c files


# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library from the .o files
ar -rc liball.a *.o

#index the library
ranlib liballa.a
