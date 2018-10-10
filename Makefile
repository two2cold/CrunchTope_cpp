# This is the make file of CrunchTope c++ version
# Coded by Yuchen Liu
#
CC = g++
CFLAGS  = -g -Wall -std=c++11

default: CrunchTope

OBJFS = crunchtope.o\

HEADERS = _stricmp.h\
	ReadPestControl.h\
	StartTope.h

CrunchTope: $(OBJFS)
	$(CC) $(CFLAGS) -o CrunchTope $(OBJFS)

crunchtope.o:  $(HEADERS)
	$(CC) $(CFLAGS) -c crunchtope.cpp

clean:
	$(RM) CrunchTope *.o *~
