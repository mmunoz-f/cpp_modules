#pragma once

#include <string>
#include "FormattedDate.hpp"

class BitcoinDataValue
{
	FormattedDate m_date;
	float m_value;

	BitcoinDataValue();

public:
	BitcoinDataValue(const std::string &line, const std::string &delimiter);
	BitcoinDataValue(const BitcoinDataValue &other);
	
	BitcoinDataValue &operator=(const BitcoinDataValue &other);
	
	~BitcoinDataValue();
	
	void SetDate(const std::string &value);
	void SetValue(const float &value);
	void SetValue(const std::string &value);

	FormattedDate GetDate() const;
	float GetValue() const;
};