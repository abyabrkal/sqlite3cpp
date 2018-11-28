// A simple program to compute square of a number
#include <iostream>
#include <math>

int main(int argc, char *argv[]) {
	if(argc < 2) {
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return 1;
	}

	double inputValue = atof(argv[1]);
	double outputValue = square(inputValue);

	std::cout << "Square of given number is " << outputValue << std::endl;

	return 0;
}