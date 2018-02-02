/* A C++ version of CrunchTope
Coded by Yuchen Liu */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include "crunch_header.h"

int main()
{
	ReadPestControl();
	cout << inputFileName << endl;
	string runtime[BLOCK_LINE_NUMS];
	int lineNum = ReadBlock("RUNTIME", runtime);
	for(int i=0; i<lineNum; i++)
		cout << runtime[i] << endl;
	string words[LINE_WORD_NUMS];
	int wordCount = ReadLine(runtime[0], words);
	for(int i=0; i<wordCount; i++)
		cout << words[i] << endl;
	for(int i=0;i<20;i++)
		cout << flagBlocks[i];
	cout << endl;
	FlagBlocks();
	for(int i=0;i<20;i++)
		cout << flagBlocks[i];
	cout << endl;
	return 0;
}
