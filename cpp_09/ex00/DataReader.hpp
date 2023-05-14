#pragma once

# include <string>

class DataReader
{
private:
	std::ifstream infile;

public:
	const std::string &file;

	DataReader(const std::string &file = "data.csv");
	DataReader(const DataReader &other);
	~DataReader();

	DataReader &operator=(const DataReader &other);

	std::string &ReadLine() const;
};