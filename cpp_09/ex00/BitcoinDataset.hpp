#pragma once

# include <stdexcept>
# include <fstream>
# include <string>

class BitcoinDataset
{
public:
	BitcoinDataset(const std::string &file = "data.csv");
	BitcoinDataset(const BitcoinDataset &other);
	~BitcoinDataset();

	BitcoinDataset &operator=(const BitcoinDataset &other);

private:
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