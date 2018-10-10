/* Read input file
Coded by Yuchen Liu */

#ifndef READINPUTFILE_H__
#define READINPUTFILE_H__

void ReadInputFile() {
    ifstream file;
    file.open(inputFileName); // Try to open the input file
    if(file.fail()) { // Run when the input file doesn't exist
        cout << "Cannot find input file: " << inputFileName << endl;
        exit(-1);
    }
    
}

#endif
