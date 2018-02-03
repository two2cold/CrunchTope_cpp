#
# This is an example Makefile for a countwords program.  This
# program uses both the scanner module and a counter module.
# Typing 'make' or 'make count' will create the executable file.
#

# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++
CC = g++
CFLAGS  = -g -Wall

default: CrunchTope

OBJFS = _stricmp.o\
        crunchtope.o\
        flag_blocks.o\
        read_block.o\
        read_line.o\
        read_pestcontrol.o

HEADERS = crunch_header.h\
          external_variables.h

CrunchTope: $(OBJFS)
	$(CC) $(CFLAGS) -o CrunchTope $(OBJFS)

# To create the object file countwords.o, we need the source
# files countwords.c, scanner.h, and counter.h:
#
crunchtope.o:  $(HEADERS)
	$(CC) $(CFLAGS) -c ccrunchtope.cpp

clean:
	$(RM) CrunchTope *.o *~
