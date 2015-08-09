// ImageManipulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cstdio>
#include <cstdlib>
#include <string>
#include <iterator>
#include <CL/cl.h>

const std::string hw("Hello World\n");

inline void checkErr(cl_int err, const char * name)
{
	if (err != CL_SUCCESS)
	{
		std::cerr << "ERROR: " << name << " (" << err << ")" << std::endl; 
		exit(EXIT_FAILURE); 
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}


