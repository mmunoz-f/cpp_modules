#include <iostream>
#include "DataReader.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
	}

	// Read Data
	try
	{
		DataReader dataReader;

		while (1)
		{
			dataReader.ReadLine();
		}
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}