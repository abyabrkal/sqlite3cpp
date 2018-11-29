// A simple program to compute square of a number
#include <iostream>
#include <math>
#include "cmintroconfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main(int argc, char *argv[]) {

	if(argc < 2) {
		std::cout << argv[0] << " Version " << 
            		 cmintro_VERSION_MAJOR <<
           			 cmintro_VERSION_MINOR << std::endl;

		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return 1;
	}

	double inputValue = atof(argv[1]);

	#ifdef USE_MYMATH
  		double outputValue = mysq(inputValue);
	#else
  		double outputValue = square(inputValue);
	#endif

	std::cout << "Square of given number is " << outputValue << std::endl;

	return 0;
}