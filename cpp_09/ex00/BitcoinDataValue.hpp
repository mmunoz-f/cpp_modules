#include <string>

class BitcoinDataValue
{
	std::string date;
	float value;

	BitcoinDataValue();

public:
	BitcoinDataValue(const BitcoinDataValue &other);
	
	BitcoinDataValue &operator=(const BitcoinDataValue &other);
	
	~BitcoinDataValue();
	
	void SetDate(const std::string &value);
	void SetValue(const float &value);
	void SetValue(const std::string &value);

	std::string GetDate() const;
	float GetValue() const;

	static BitcoinDataValue *CreateFromLine(const std::string &data, const char *delimiter);
};