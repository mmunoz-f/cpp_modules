#include <string>

class BitcoinDataValue
{
	std::string date;

	enum ValueTypeEnum
	{
		UNDEFINED,
		FLOAT,
		INT
	};
	
	ValueTypeEnum value_type;

	union value
	{
		float	t;
		int		i;
	};

	BitcoinDataValue();
	BitcoinDataValue(const BitcoinDataValue &other);

	~BitcoinDataValue();

	BitcoinDataValue &operator=(const BitcoinDataValue &other);

	void SetDate(const std::string &value);
	void SetValue(const std::string &value);

	void GetDate();
	void GetDate();

public:
	BitcoinDataValue(const std::string &data);
};