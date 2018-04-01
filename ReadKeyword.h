/* Read keyword from each block
Coded by Yuchen Liu */

#ifndef READKEYWORD_H__
#define READKEYWORD_H__

class ReadKeyword
{
public:
	ReadKeyword(string words[], string name, double* num, double range[2]);
	ReadKeyword(string words[], string name, double* num);
	ReadKeyword(string words[], string name, double* num, int numWords);
	ReadKeyword(string words[], string name, bool* TF);
	ReadKeyword(string words[], string name, string* var, string options[], int optionsLen);
	ReadKeyword(string words[], string name, string* var, int numWords);
	ReadKeyword(string words[], string name, int* num, int range[2]);
	bool isRead;
};
ReadKeyword::ReadKeyword(string words[], string name, double* num, double range[2])
{
	isRead = false;
	if(!_stricmp(words[0], name))
	{
		*num = atof(words[1].c_str());
		if(range[0]==500)
		{
			if(*num>range[1])
			{
				cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
				exit(-1);
			}
		}else if(range[1]==500)
		{
			if(*num<range[0])
			{
				cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
				exit(-1);
			}
		}else
		{
			if(*num>range[1] || *num<range[0])
			{
				cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
				exit(-1);
			}
		}
		isRead = true;
	}
}
ReadKeyword::ReadKeyword(string words[], string name, double* num)
{
	isRead = false;
	if(!_stricmp(words[0], name))
	{
		*num = atof(words[1].c_str());
		isRead = true;
	}
}
ReadKeyword::ReadKeyword(string words[], string name, double* num, int numWords)
{
	isRead = false;
	if(!_stricmp(words[0], name))
	{
		for(int i=1;i<numWords;i++)
		{
			*(num+i-1) = atof(words[i].c_str());
		}
		isRead = true;
	}
}
ReadKeyword::ReadKeyword(string words[], string name, bool* TF)
{
	isRead = false;
	if(!_stricmp(words[0], name))
	{
		if(!_stricmp(words[1], "TRUE"))
		{
			*TF = true;
		}else if(!_stricmp(words[1], "FALSE"))
		{
			*TF = false;
		}else
		{
			cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
			exit(-1);
		}
		isRead = true;
	}
}
ReadKeyword::ReadKeyword(string words[], string name, string* var, string options[], int optionsLen)
{
	isRead = false;
	if(!_stricmp(words[0], name))
	{
		*var = words[1];
		bool inputCheck = false;
		for(int i=0;i<optionsLen;i++)
		{
			if(!_stricmp(words[1], options[i]))
				inputCheck = true;
		}
		if(!inputCheck)
		{
			cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
			exit(-1);
		}
		isRead = true;
	}
}
ReadKeyword::ReadKeyword(string words[], string name, string* var, int numWords)
{
	isRead = false;
	if(!_stricmp(words[0], name))
	{
		for(int i=1;i<numWords;i++)
		{
			*(var+i-1) = words[i];
		}
		isRead = true;
	}
}
ReadKeyword::ReadKeyword(string words[], string name, int* num, int range[2])
{
	isRead = false;
	if(!_stricmp(words[0], name))
	{
		*num = atof(words[1].c_str());
		if(range[0]==500)
		{
			if(*num>range[1])
			{
				cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
				exit(-1);
			}
		}else if(range[1]==500)
		{
			if(*num<range[0])
			{
				cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
				exit(-1);
			}
		}else
		{
			if(*num>range[1] || *num<range[0])
			{
				cout << "Input " << words[0] << " value: " << words[1] << " is invalid" << endl;
				exit(-1);
			}
		}
		isRead = true;
	}
}

#endif
