#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: missing argument." << std::endl;
		return 1;
	}

	BitcoinDataset dataset;
	BitcoinExchange bitcoinExchange(dataset);

	bitcoinExchange.ExchangeFile(argv[1]);

	return 0;
}