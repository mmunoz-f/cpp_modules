#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: missing argument." << std::endl;
		return 1;
	}

	try
	{	
		BitcoinDataset dataset("data.csv");
		BitcoinExchange bitcoinExchange(dataset);

		bitcoinExchange.ExchangeFile(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}