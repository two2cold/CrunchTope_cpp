/* Read the title block in the input file
Coded by Yuchen Liu */

#ifndef READTITLE_H__
#define READTITLE_H__

void ReadTitle()
{
	string block[BLOCK_LINE_NUMS];
	int numLines = ReadBlock("TITLE", block);
	for(int i=0;i<numLines;i++)
	{
		cout << "Title of simulation: " << block[i] << endl;
	}
}

#endif
