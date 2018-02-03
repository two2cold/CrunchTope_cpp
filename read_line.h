/* Read each word in a line
Coded by Yuchen Liu*/

#ifndef READ_LINE_H__
#define READ_LINE_H__

int ReadLine(string stringLine, string* words)
{
	istringstream iss(stringLine);
	string tempWord;
	int i = 0;
	while(iss >> tempWord) // Read a string word by word
	{
		if(*tempWord.c_str() != '!') // Ignore anything starts with !
		{
			*(words + i) = tempWord;
			i++;
		}
	}
	return i; // Return the number of words in the string
}

#endif
