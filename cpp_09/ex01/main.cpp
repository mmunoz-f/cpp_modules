#include <stdexcept>
#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return 1;
	}

	try
	{
		RPN rpn((std::string(argv[1])));
		std::cout << rpn.GetSolution() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return 1; 
	}

	return 0;
}