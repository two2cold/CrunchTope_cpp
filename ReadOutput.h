/* Read the Output block
Coded by Yuchen Liu */

#ifndef READOUTPUT_H__
#define READOUTPUT_H__

void ReadOutput()
{
	string block[BLOCK_LINE_NUMS];
	int numLines = ReadBlock("OUTPUT", block);
	for(int i=0;i<numLines;i++)
	{
		string words[LINE_WORD_NUMS];
		int numWords = ReadLine(block[i], words);
		if(numWords==1)
		{
			cout << "Keyword: " << words[0] << " has not been defined" << endl;
			exit(-1);
		}
		if(ReadKeyword(words, "Time_units", &Time_units, optionsTime_units, 3).isRead) continue;
		if(ReadKeyword(words, "Spatial_profile", Spatial_profile, numWords).isRead) continue;
		//if(ReadKeyword(words, "Time_series", Spatial_profile, numWords).isRead) continue;
		//if(ReadKeyword(words, "Time_series_print", Spatial_profile, numWords).isRead) continue;
		//if(ReadKeyword(words, "Time_series_units", Spatial_profile, numWords).isRead) continue;
		//if(ReadKeyword(words, "Time_series_interval", Spatial_profile, numWords).isRead) continue;
		//if(ReadKeyword(words, "MakeMovie", Spatial_profile, numWords).isRead) continue;
	}
}

#endif
