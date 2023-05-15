#include <stdexcept>
#include "BitcoinDataValue.hpp"

BitcoinDataValue::BitcoinDataValue()
{

}

BitcoinDataValue::BitcoinDataValue(const BitcoinDataValue &other)
	: date(date), value(value)
{
	
}

BitcoinDataValue::~BitcoinDataValue()
{

}

BitcoinDataValue &BitcoinDataValue::operator=(const BitcoinDataValue &other)
{
	this->date = other.date;
	this->value = other.value;
}

void BitcoinDataValue::SetDate(const std::string &value)
{

}

void BitcoinDataValue::SetValue(const float &value)
{
	this->value = value;
}

void BitcoinDataValue::SetValue(const std::string &value)
{
	size_t pos;
	float raw = std::stof(value, &pos);
	
	if (pos != value.length())
	{
		throw std::invalid_argument("not a valid exchange rate format");
	}

	this->value = raw;
}

std::string	BitcoinDataValue::GetDate() const
{
	return this->date;
}

float BitcoinDataValue::GetValue() const
{
	return this->value;
}

BitcoinDataValue *BitcoinDataValue::CreateFromLine(const std::string &data, const char *delimiter)
{
	BitcoinDataValue *data_value = new BitcoinDataValue();

	size_t delimiter_pos = data.find(delimiter);

	std::string raw_date = data.substr(0, delimiter_pos);
	std::string raw_value = data.substr(delimiter_pos);

	data_value->SetDate(raw_date);
	data_value->SetValue(raw_value);

	return data_value;
}