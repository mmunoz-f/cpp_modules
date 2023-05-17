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

float BitcoinExchange::Exchange(const FormattedDate &date, const float &amount)
{
	float value = m_data[date];

	return amount * value;
}

float BitcoinExchange::Exchange(const std::string &line, const std::string &delimiter)
{
	BitcoinDataValue data(line, delimiter);

	return Exchange(data.GetDate(), data.GetValue());
}

void BitcoinExchange::ExchangeFile(const std::string &file)
{
	std::ifstream infile(file);
	std::string line;

	for(size_t line_number = 0; std::getline(infile, line); line_number++)
	{
		try
		{
			Exchange(line);
		}
		catch(const std::invalid_argument &e)
		{
			std::cerr << "Error : " << e.what() << std::endl;
		}
	}
}