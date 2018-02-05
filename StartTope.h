/* Initializing CrunchTope c++ version, read in all the variables
Coded by Yuchen Liu */

#ifndef STARTTOPE_H__
#define STARTTOPE_H__

void StartTope()
{
	ReadPestControl();
	FlagBlocks(); // Don't know if this is useful
	if(flagBlocks[0])
	{
		ReadTitle();
	}else
	{
		cout << "Cannot find TITLE block" << endl;
	}
	if(flagBlocks[1])
	{
		ReadRuntime();
	}
}

#endif
