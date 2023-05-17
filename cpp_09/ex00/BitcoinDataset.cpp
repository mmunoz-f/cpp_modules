#include <stdexcept>
#include <fstream>
#include <iostream>
#include "BitcoinDataValue.hpp"
#include "BitcoinDataset.hpp"

BitcoinDataset::BitcoinDataset(const std::string &file)
	: m_data()
{
	Load(file);
}

BitcoinDataset::BitcoinDataset(const BitcoinDataset &other)
	: m_data(other.m_data)
{

}

BitcoinDataset::~BitcoinDataset()
{

}

BitcoinDataset	&BitcoinDataset::operator=(const BitcoinDataset &other)
{
	m_data = other.m_data;
	return *this;
}

float BitcoinDataset::operator[](const FormattedDate &date) const
{
	data_map::const_iterator it = m_data.lower_bound(date);

	if (it == m_data.begin())
	{
		throw std::invalid_argument("");
	}

	return (--it)->second;
}

void BitcoinDataset::AddLine(const std::string &line)
{
	BitcoinDataValue data(line, ",");

	m_data[data.GetDate()] = data.GetValue();
}

void BitcoinDataset::Load(const std::string &file)
{
	std::ifstream infile(file);
	std::string line;

	for (size_t line_number = 0; std::getline(infile, line); line_number++)
	{
		try
		{
			AddLine(line);
		}
		catch (std::invalid_argument &e)
		{
			std::cout << "Ignored line " << line_number << ": Error :" << e.what() << std::endl;
		}
	}
}