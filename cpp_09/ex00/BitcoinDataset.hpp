#pragma once

#include <string>
#include <map>
#include "FormattedDate.hpp"

class BitcoinDataset
{
	typedef std::map<FormattedDate, float> data_map;

	data_map m_data;

public:
	BitcoinDataset();
	BitcoinDataset(const std::string &file);
	BitcoinDataset(const BitcoinDataset &other);
	~BitcoinDataset();

	BitcoinDataset &operator=(const BitcoinDataset &other);

	float operator[](const FormattedDate &date) const;

private:
	void Load(const std::string &file);
	void AddLine(const std::string &line);

	static bool IsHeader(const std::string &line);
};