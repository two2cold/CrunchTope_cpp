/* Initializing CrunchTope c++ version, read in all the variables
Coded by Yuchen Liu */

#ifndef STARTTOPE_H__
#define STARTTOPE_H__

void StartTope(string& inputFileName, unordered_map<string,bool>& blocks, unordered_map<string,string>& parameters) {
    ReadPestControl(inputFileName);

    // Initialize all blocks
    blocks.insert({
    {"TITLE",false}, {"RUNTIME",false}, {"OUTPUT",false}, {"DISCRETIZATION",false}, {"PRIMARY_SPECIES",false},
    {"SECONDARY_SPECIES",false}, {"GASES",false}, {"MINERALS",false}, {"AQUEOUS_KINETICS",false},
    {"ION_EXCHANGE",false}, {"SURFACE_COMPLEXATION",false}, {"GEOCHEMICAL_CONDITIONS",false},
    {"INITIAL_CONDITIONS",false}, {"BOUNDARY_CONDITIONS",false}, {"TRANSPORT",false},
    {"FLOW",false}, {"TEMPERATURE",false}, {"POROSITY",false}, {"PEST",false}, {"EROSION",false}});

    // Initilize all parameters
    parameters.insert({
    // RUNTIME block
    {"COORDINATE","RECTANGULAR"},
    {"CORRECTION_MAX","2.0"},
    {"COURANT_NUMBER","0.5"},
    {"DATABASE","DATACOM.DBS"},
    {"DATABASE_SWEEP","FALSE"},
    {"DEBYE_HUCKEL","TRUE"},
    {"DENSITY_MODULE","TEMPERATURE"},
    {"DISSOLUTION_MAX","0.001"},
    {"FIX_SATURATION","1.0"},
    {"GENERIC_RATES","0"},
    {"GIMRT","TRUE"},
    {"GIMRT_PC","BJACOBI"},
    {"GIMRT_PCLEVEL","2"},
    {"GIMRT_SOLVER","GMRES"},
    {"GRAPHICS","KALEIDAGRAPH"},
    {"HINDMARSH","TRUE"},
    {"LAG_ACTIVITY","TRUE"},
    {"LATER_INPUTFILES",NULL},
    {"MASTER","O2(AQ)"},
    {"OVERSHOOTTOLERANCE","0.00001"},
    {"PC","ILU"},
    {"PCLEVEL","5"},
    {"REACTION_PATH","FALSE"},
    {"READ_SATURATIONFILE",NULL},
    {"RESTART","CRUNCH.RST"},
    {"SAVE_RESTART","CRUNCH.RST"},
    {"SCREEN_OUTPUT","1"},
    {"SOLVER","BICG"},
    {"SPECIATE_ONLY","FALSE"},
    {"STEADY_STATE","FALSE"},
    {"TIMESTEP_MAX","1.0"},
    {"TIMESTEP_INIT","1.0E-9"},
    {"TIME_TOLERANCE","0.001"},
    // OUTPUT block
    });
}

#endif
