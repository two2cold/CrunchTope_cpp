/* A C++ version of CrunchTope
Coded by Yuchen Liu */

#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <unordered_map>
#include "crunch_header.h"

#define STR_LENGTH 256

int main()
{
    // Preallocating all parameters
    string inputFileName; // Storing the name of the input file
    unordered_map<string,bool> blocks; // Hash tagging <block names, they exist in the input file>
    unordered_map<string,string> parameters; // Hash tagging <parameter names, values>
    
    // Initialing all parameters, and reading parameter values from the input file
    StartTope(inputFileName,blocks,parameters);
}
