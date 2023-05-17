#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <errno.h>
#include "BitcoinDataValue.hpp"

BitcoinDataValue::BitcoinDataValue()
{

}

BitcoinDataValue::BitcoinDataValue(const std::string &line, const std::string &delimiter)
{
	size_t delimiter_pos = line.find(delimiter);

	std::string raw_date = line.substr(0, delimiter_pos);
	std::string raw_value = line.substr(delimiter_pos + delimiter.length());

	SetDate(raw_date);
	SetValue(raw_value);
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

	return *this;
}

void BitcoinDataValue::SetDate(const std::string &value)
{
	this->m_date = FormattedDate(value);
}

void BitcoinDataValue::SetValue(const float &value)
{
	if (value < 0)
	{
		throw std::invalid_argument("not a positive number");
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

	SetValue(raw);
}

FormattedDate	BitcoinDataValue::GetDate() const
{
	return this->m_date;
}

float BitcoinDataValue::GetValue() const
{
	return this->m_value;
}