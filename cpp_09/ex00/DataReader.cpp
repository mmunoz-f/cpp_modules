#include <stdexcept>
#include <fstream>
#include "DataReader.hpp"

#include <iostream>

DataReader::DataReader(const std::string &file):
	file(file)
{
	infile.open(file);
	if (!infile)
	{
		throw std::runtime_error("could not open file");
	}
}

DataReader::DataReader(const DataReader &other): file(other.file)
{

}

DataReader::~DataReader()
{

}

DataReader	&DataReader::operator=(const DataReader &other)
{
	DataReader dataReader(other);
	return dataReader;
}

std::string &DataReader::ReadLine() const
{
	std::string line;

	if (!std::getline(infile, line))
	{
		std::cout << line << std::endl;
	}
	else
	{
		throw std::exception();
	}
}