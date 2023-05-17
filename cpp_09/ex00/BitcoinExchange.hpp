#pragma once

#include <string>
#include "BitcoinDataset.hpp"

class BitcoinExchange
{
	BitcoinDataset m_data;

	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);
public:
	BitcoinExchange(const BitcoinDataset &data);

	~BitcoinExchange();

	float Exchange(const FormattedDate &date, const float &amount);
	float Exchange(const std::string &line, const std::string &delimiter = " | ");
	void ExchangeFile(const std::string &file);
};