#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <errno.h>
#include "utils.hpp"
#include "BitcoinDataValue.hpp"

BitcoinDataValue::BitcoinDataValue()
{

}

BitcoinDataValue::BitcoinDataValue(const BitcoinDataValue &other)
	: m_date(other.m_date), m_value(other.m_value)
{
	
}

BitcoinDataValue::~BitcoinDataValue()
{

}

BitcoinDataValue &BitcoinDataValue::operator=(const BitcoinDataValue &other)
{
	this->m_date = other.m_date;
	this->m_value = other.m_value;
}

void BitcoinDataValue::SetDate(const std::string &value)
{
	this->m_date = FormattedDate(value);
}

void BitcoinDataValue::SetValue(const float &value)
{
	if (value < 0 || value > 1000)
	{
		throw std::invalid_argument("exchange rate value must be between 0 and 1000");
	}
	this->m_value = value;
}

void BitcoinDataValue::SetValue(const std::string &value)
{
	char *pos;
	float raw = std::strtod(value.c_str(), &pos);

	if (*pos != '\0' || errno == ERANGE)
	{
		errno = 0;
		throw std::invalid_argument("not a valid exchange rate format");
	}

	if (raw < 0 || raw > 1000)
	{
		throw std::invalid_argument("exchange rate value must be between 0 and 1000");
	}

	this->m_value = raw;
}

FormattedDate	BitcoinDataValue::GetDate() const
{
	return this->m_date;
}

float BitcoinDataValue::GetValue() const
{
	return this->m_value;
}

BitcoinDataValue *BitcoinDataValue::CreateFromLine(const std::string &data, const char *delimiter)
{
	BitcoinDataValue *data_value = new BitcoinDataValue();

	size_t delimiter_pos = data.find(delimiter);

	std::string raw_date = data.substr(0, delimiter_pos);
	std::string raw_value = data.substr(delimiter_pos);

	try
	{
		data_value->SetDate(raw_date);
		data_value->SetValue(raw_value);
	}
	catch (std::invalid_argument &e)
	{
		delete data_value;
		throw e;
	}

	return data_value;
}