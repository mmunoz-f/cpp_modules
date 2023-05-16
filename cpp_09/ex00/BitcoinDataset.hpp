#pragma once

# include <stdexcept>
# include <fstream>
# include <string>
# include <map>

class BitcoinDataset
{
public:
	BitcoinDataset(const std::string &file = "data.csv");
	~BitcoinDataset();

	BitcoinDataset &operator=(const BitcoinDataset &other);

private:
	BitcoinDataset();
	BitcoinDataset(const BitcoinDataset &other);

	void Load(const std::string &file);
	void AddLine(const std::string &line);

	class BadFormatException :  public std::exception
	{
		const std::string &message;

	public:
		BadFormatException(const std::string &message);

		const char *what() const throw();
	};
};