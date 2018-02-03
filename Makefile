# This is the make file of CrunchTope c++ version
# Coded by Yuchen Liu
#
CC = g++
CFLAGS  = -g -Wall

default: CrunchTope

OBJFS = crunchtope.o\

HEADERS = _stricmp.h\
          crunch_header.h\
          flag_blocks.h\
          external_variables.h\
          read_block.h\
          read_line.h\
          read_pestcontrol.h

CrunchTope: $(OBJFS)
	$(CC) $(CFLAGS) -o CrunchTope $(OBJFS)

crunchtope.o:  $(HEADERS)
	$(CC) $(CFLAGS) -c crunchtope.cpp

clean:
	$(RM) CrunchTope *.o *~
