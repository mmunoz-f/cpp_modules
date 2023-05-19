#include <iostream>
#include <vector>
#include <list>
#include "PMergeMe.hpp"



int main(int argc, char **argv)
{
	try
	{
		PMergeMe<std::vector<int> >::Test(argv);
		PMergeMe<std::list<int> >::Test(argv);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}