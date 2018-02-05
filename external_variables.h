/* Initialize all the external variables
Coded by Yuchen Liu */

#ifndef EXTERNAL_VARIABLES_H__
#define EXTERNAL_VARIABLES_H__

#define STR_LENGTH 256
#define BLOCK_LINE_NUMS 256
#define LINE_WORD_NUMS 64
#define BLOCK_NUMS 20
string inputFileName;
bool flagBlocks[BLOCK_NUMS];
string blockNames[BLOCK_NUMS] = {
"TITLE", "RUNTIME", "OUTPUT", "DISCRETIZATION", "PRIMARY_SPECIES"
"SECONDARY_SPECIES", "GASES", "MINERALS", "AQUEOUS_KINETICS", "ION_EXCHANGE"
"SURFACE_COMPLEXATION", "GEOCHEMICAL_CONDITIONS", "INITIAL_CONDITIONS", "BOUNDARY_CONDITIONS", "TRANSPORT"
"FLOW", "TEMPERATURE", "POROSITY", "PEST", "EROSION"};

// Specify the initial values of the variables, and the options/range of them
string Coordinate = "Rectangular";
string optionsCoordinate[3] = {"RECTANGULAR", "CYLINDRICAL", "SPHERICAL"};
double Correction_max = 2.0;
double rangeCorrection_max[2] = {0, 500};
double Courant_number = 0.5;
double rangeCourant_number[2] = {0, 1};
string Database = "datacom.dbs";
bool Database_sweep = false;
bool Debye_Huckel = true;
string Density_module = "Temperature";
string optionsDensity_module[4] = {"TEMPERATURE", "sodium_nitrate", "sodium_chloride", "potassium_nitrate"};
double Dissolution_max = 0.001;
double rangeDissolution_max[2] = {0, 500};
double Fix_saturation = 1.0;
double rangeFix_saturation[2] = {0, 1};
double Generic_rates = 0;
bool Gimrt = true;
string Gimrt_pc = "bjacobi";
string optionsGimrt_pc[2] = {"bjacobi", "ilu"};
int Gimrt_pclevel = 2;
int rangeGimrt_pclevel[2] = {0, 500};
string Gimrt_solver = "gmres";
string optionsGimrt_solver[2] = {"gmres", "bcgs"};
string Graphics = "kaleidagraph";
string optionsGraphics[3] = {"kaleidagraph", "tecplot", "xmgr"};
bool Hindmarsh = true;
bool Lag_activity = true;
string Later_inputfiles[LINE_WORD_NUMS];
double OvershootTolerance = 0.00001;
double rangeOvershootTolerance[2] = {0, 500};
string Pc = "ilu";
string optionsPc[3] = {"ilu", "jacobi", "direct"};
int Pclevel = 5;
int rangePclevel[2] = {0, 500};
bool Reaction_path = false;
string Read_SaturationFile[LINE_WORD_NUMS];
string Restart[LINE_WORD_NUMS];
string Save_restart = "crunch.rst";
int Screen_output = 1;
int rangeScreen_output[2] = {0, 500};
string Solver = "bicg";
string optionsSolver[4] = {"bicg", "gmres", "bcgs", "direct"};
bool Speciate_only = false;
double Timestep_max = 1.0;
double rangeTimestep_max[2] = {0, 500};
double Timestep_init = 1.0e-9;
double rangeTimestep_init[2] = {0, 500};
double Time_tolerance = 0.001;
double rangeTime_tolerance[2] = {0, 500};
bool petscon = true;

#endif
