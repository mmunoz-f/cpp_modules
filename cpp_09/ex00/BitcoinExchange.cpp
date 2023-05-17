#include <stdexcept>
#include <iostream>
#include <fstream>
#include "BitcoinDataValue.hpp"
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
	: m_data(other.m_data)
{

}

BitcoinExchange::BitcoinExchange(const BitcoinDataset &data)
	: m_data(data)
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	m_data = other.m_data;
	return *this;
}

float BitcoinExchange::Exchange(const BitcoinDataValue &data)
{
	float value = m_data[data.GetDate()];

	return data.GetValue() * value;
}

void BitcoinExchange::ExchangeFile(const std::string &file)
{
	std::ifstream infile(file);
	std::string line;

	for(size_t line_number = 0; std::getline(infile, line); line_number++)
	{
		if (line_number == 0 && IsHeader(line))
		{
			continue;
		}

		try
		{
			BitcoinDataValue data(line, " | ");
			if (data.GetValue() > 1000)
			{
				throw std::invalid_argument("too large number");
			}

			std::cout << data.GetDate() << " => "  << data.GetValue() << " = " << Exchange(data) << std::endl;
		}
		catch(const std::invalid_argument &e)
		{
			std::cerr << "Error : " << e.what() << std::endl;
		}
	}
}

bool BitcoinExchange::IsHeader(const std::string &line)
{
	return line.find("date") == 0;
}