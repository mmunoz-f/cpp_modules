#include <iostream>
#include "ListMergeMe.hpp"
#include "VectorMergeMe.hpp"

int main(int argc, char **argv)
{
	try
	{
		VectorMergeMe::Test(argv);
		ListMergeMe::Test(argv);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}