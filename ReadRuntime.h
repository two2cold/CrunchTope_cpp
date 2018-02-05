/* Read the runtime block in the input file
Coded by Yuchen Liu */

#ifndef READRUNTIME_H__
#define READRUNTIME_H__

void ReadRuntime()
{
	string block[BLOCK_LINE_NUMS];
	int numLines = ReadBlock("RUNTIME", block);
	for(int i=0;i<numLines;i++)
	{
		string words[LINE_WORD_NUMS];
		int numWords = ReadLine(block[i], words);
		if(numWords==1)
		{
			cout << "Keyword: " << words[0] << " has not been defined" << endl;
			exit(-1);
		}
		if(ReadKeyword(words, "Coordinate", &Coordinate, optionsCoordinate, 3).isRead) continue;
		if(ReadKeyword(words, "Correction_max", &Correction_max, rangeCorrection_max).isRead) continue;
		if(ReadKeyword(words, "Courant_number", &Courant_number, rangeCourant_number).isRead) continue;
		if(ReadKeyword(words, "Database", &Database, numWords).isRead) continue;
		if(ReadKeyword(words, "Database_sweep", &Database_sweep).isRead) continue;
		if(ReadKeyword(words, "Debye-Huckel", &Debye_Huckel).isRead) continue;
		if(ReadKeyword(words, "Density_module", &Density_module, optionsDensity_module, 4).isRead) continue;
		if(ReadKeyword(words, "Dissolution_max", &Dissolution_max, rangeDissolution_max).isRead) continue;
		if(ReadKeyword(words, "Fix_saturation", &Fix_saturation, rangeFix_saturation).isRead) continue;
		if(ReadKeyword(words, "Generic_rates", &Generic_rates).isRead) continue;
		if(ReadKeyword(words, "Gimrt", &Gimrt).isRead) continue;
		if(ReadKeyword(words, "Gimrt_pc", &Gimrt_pc, optionsGimrt_pc, 2).isRead) continue;
		if(ReadKeyword(words, "Gimrt_pclevel", &Gimrt_pclevel, rangeGimrt_pclevel).isRead) continue;
		if(ReadKeyword(words, "Gimrt_solver", &Gimrt_solver, optionsGimrt_solver, 2).isRead) continue;
		if(ReadKeyword(words, "Graphics", &Graphics, optionsGraphics, 3).isRead) continue;
		if(ReadKeyword(words, "Hindmarsh", &Hindmarsh).isRead) continue;
		if(ReadKeyword(words, "Lag_activity", &Lag_activity).isRead) continue;
		if(ReadKeyword(words, "Later_inputfiles", Later_inputfiles, numWords).isRead) continue;
		//if(ReadKeyword(words, "Master", &Gimrt_solver, optionsGimrt_solver, 2).isRead) continue; NEED TO CODE LATER
		if(ReadKeyword(words, "OvershootTolerance", &OvershootTolerance, rangeOvershootTolerance).isRead) continue;
		if(ReadKeyword(words, "Pc", &Pc, optionsPc, 3).isRead) continue;
		if(ReadKeyword(words, "Pclevel", &Pclevel, rangePclevel).isRead) continue;
		if(ReadKeyword(words, "Reaction_path", &Reaction_path).isRead) continue;
		if(ReadKeyword(words, "Read_SaturationFile", Read_SaturationFile, numWords).isRead) continue;
		if(ReadKeyword(words, "Restart", Restart, numWords).isRead) continue;
		if(ReadKeyword(words, "Save_restart", &Save_restart, numWords).isRead) continue;
		if(ReadKeyword(words, "Screen_output", &Screen_output, rangeScreen_output).isRead) continue;
		if(ReadKeyword(words, "Solver", &Solver, optionsSolver, 4).isRead) continue;
		if(ReadKeyword(words, "Speciate_only", &Speciate_only).isRead) continue;
		//if(ReadKeyword(words, "Steady_state", &Steady_state).isRead) continue; NEED TO CODE LATER
		if(ReadKeyword(words, "Timestep_max", &Timestep_max, rangeTimestep_max).isRead) continue;
		if(ReadKeyword(words, "Timestep_init", &Timestep_init, rangeTimestep_init).isRead) continue;
		if(ReadKeyword(words, "Time_tolerance", &Time_tolerance, rangeTime_tolerance).isRead) continue;
	}
}

#endif
