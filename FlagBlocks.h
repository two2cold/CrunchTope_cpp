/* Read the entire input file and store the blocks specified in the input file
Coded by Yuchen Liu */

#ifndef FLAG_BLOCKS_H__
#define FLAG_BLOCKS_H__

bool flagBlocks[BLOCK_NUMS];
string blockNames[BLOCK_NUMS] = {
"TITLE", "RUNTIME", "OUTPUT", "DISCRETIZATION", "PRIMARY_SPECIES"
"SECONDARY_SPECIES", "GASES", "MINERALS", "AQUEOUS_KINETICS", "ION_EXCHANGE"
"SURFACE_COMPLEXATION", "GEOCHEMICAL_CONDITIONS", "INITIAL_CONDITIONS", "BOUNDARY_CONDITIONS", "TRANSPORT"
"FLOW", "TEMPERATURE", "POROSITY", "PEST", "EROSION"};

void FlagBlocks()
{
	for(int i=0;i<BLOCK_NUMS;i++) flagBlocks[i] = false; // Initialize flags
	ifstream file;
	file.open(inputFileName,ios::in);
	string tempString;
	while(file >> tempString) // Read in the input file word by word
	{
		for(int i=0;i<BLOCK_NUMS;i++)
		{
			if(!_stricmp(tempString,blockNames[i]) || !_stricmp(tempString,(blockNames[i]+'\r')))
				flagBlocks[i] = true;
		}
	}
	file.close();
}

#endif
