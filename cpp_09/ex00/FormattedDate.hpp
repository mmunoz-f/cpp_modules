#include <string>

class FormattedDate
{
public:
	const std::string format = "YYYY-MM-DD";

	int year;
	int month;
	int day;

private:
	FormattedDate();
	
public:
	FormattedDate(const std::string &value);
	FormattedDate(const FormattedDate &other);

	~FormattedDate();

	FormattedDate &operator=(const FormattedDate &other);

	bool Validate() const;
};