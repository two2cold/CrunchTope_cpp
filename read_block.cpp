/* Read one line from a file
Coded by Yuchen Liu */

int ReadBlock(string blockName, string* lines)
{
	ifstream file;
	file.open(inputFileName,ios::in);
	string tempString;
	int i = 0;
	while(file >> tempString) // Reading the whole input file word by word
	{
		if(!_stricmp(tempString,blockName) || !_stricmp(tempString,(blockName+'\r'))) // Finding the blockName
		{
			getline(file,tempString); // Ignore anything after the line with the blockName
			while(_stricmp(tempString, "END") && _stricmp(tempString, "END\r")) // When it doesn't read END. DO NOT PUT ANY COMMENT AFTER END
			{
				getline(file,tempString); // Read the block line by line
				if(*tempString.c_str() != '!') // Ignore anything start with !
				{
					*(lines + i) = tempString; // Store the line
					i++;
				}
			};
			return i-1; // Return the number of lines in that block
		}
	}
	file.close();
	return i;
}
