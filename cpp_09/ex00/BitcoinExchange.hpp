#pragma once

#include <string>
#include "BitcoinDataset.hpp"
#include "BitcoinDataValue.hpp"

class BitcoinExchange
{
	BitcoinDataset m_data;

	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);

	static bool IsHeader(const std::string &line);

public:
	BitcoinExchange(const BitcoinDataset &data);

	~BitcoinExchange();

	float Exchange(const BitcoinDataValue &data);
	void ExchangeFile(const std::string &file);
};