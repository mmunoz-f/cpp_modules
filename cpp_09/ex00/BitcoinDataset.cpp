#include <iostream>
#include "BitcoinDataset.hpp"

BitcoinDataset::BitcoinDataset()
{

}

BitcoinDataset::BitcoinDataset(const std::string &file = "data.csv")
{
	Load(file);
}

BitcoinDataset::BitcoinDataset(const BitcoinDataset &other)
{

}

BitcoinDataset::~BitcoinDataset()
{

}

BitcoinDataset	&BitcoinDataset::operator=(const BitcoinDataset &other)
{
	
}

void BitcoinDataset::AddLine(const std::string &line)
{

}

void BitcoinDataset::Load(const std::string &file)
{
	std::ifstream infile(file);
	std::string line;

	for (size_t line_number = 0; std::getline(infile, line); line_number++)
	{
		// Skip header
		if (line_number == 0)
			continue;

		try
		{
			AddLine(line);
		}
		catch (BadFormatException &e)
		{
			std::cout << "Line " << line_number << ": " << e.what() << std::endl;
		}
	}
}

BitcoinDataset::BadFormatException::BadFormatException(const std::string &message)
	: message(message)
{

}

const char *BitcoinDataset::BadFormatException::what() const throw()
{
	return message.c_str();
}