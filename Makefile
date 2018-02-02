# Makefile for c++ version of CrunchTope coded by Yuchen Liu

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

CrunchTope: main.o Point.o Rectangle.o
	$(CXX) $(CXXFLAGS) -o CrunchTope main.o Point.o Rectangle.o

# The main.o target can be written more simply

main.o: main.cpp Point.h Rectangle.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Point.o: Point.h

Rectangle.o: Rectangle.h Point.h
