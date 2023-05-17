#pragma once

#include <string>
#include <map>
#include "FormattedDate.hpp"

class BitcoinDataset
{
	typedef std::map<FormattedDate, float> data_map;

	data_map m_data;

public:
	BitcoinDataset(const std::string &file = "data.csv");
	BitcoinDataset(const BitcoinDataset &other);
	~BitcoinDataset();

	BitcoinDataset &operator=(const BitcoinDataset &other);

	float operator[](const FormattedDate &date) const;

private:
	void Load(const std::string &file);
	void AddLine(const std::string &line);
};