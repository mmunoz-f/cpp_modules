#include <stdexcept>
#include <fstream>
#include <iostream>
#include "BitcoinDataValue.hpp"
#include "BitcoinDataset.hpp"

BitcoinDataset::BitcoinDataset()
	: m_data()
{

}

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

	if (it->first == date || it == m_data.begin())
	{
		return it->second;
	}

	data_map::const_iterator greater_it = it--;
	data_map::const_iterator lower_it = it;
	
	return date.Closer(lower_it->first, greater_it->first)? lower_it->second : greater_it->second;
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

	if (!infile.is_open())
	{
		throw std::invalid_argument("file could not be opened");
	}

	for (size_t line_number = 1; std::getline(infile, line); line_number++)
	{
		if (line_number == 1 && IsHeader(line))
		{
			continue;
		}

		try
		{
			AddLine(line);
		}
		catch (std::invalid_argument &e)
		{
			std::cout << "Ignored line " << line_number << ": Error : " << e.what() << std::endl;
		}
	}
}

bool BitcoinDataset::IsHeader(const std::string &line)
{
	return line.find("date") == 0;
}