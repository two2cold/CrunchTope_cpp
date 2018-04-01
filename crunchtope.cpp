/* A C++ version of CrunchTope
Coded by Yuchen Liu */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <stdlib.h>
#include "crunch_header.h"

int main()
{
	StartTope();
	cout << Coordinate << endl;
	for(int i=0;i<20;i++)
	{
		cout << Spatial_profile[i] << endl;
	}
}
