/* Read PestControl file
Coded by Yuchen Liu */

#ifndef READ_PESTCONTROL_H__
#define READ_PESTCONTROL_H__

string inputFileName;

void ReadPestControl()
{
	ifstream file;
	file.open("PestControl.ant",ios::in);
	if(file.fail()) // Run when PestControl.and doesn't exist
	{
		cout << "Please type in your input file name:";
		cin >> inputFileName;
		return;
	}
	file >> inputFileName; // Read the first word and store it as the input file name
	file.close();
	file.open(inputFileName); // Try to open the input file
	if(file.fail()) // Run when the input file doesn't exist
	{
		cout << "Cannot find input file: " << inputFileName << endl;
		exit(-1);
	}
	file.close();
}

#endif
