#include <string>

enum Month
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER,
};

class FormattedDate
{
	const std::string format = "yyyy-mm-dd";

	int m_year;
	int m_month;
	int m_day;

	static int MaxDaysOfMonth(const int &month, const int &year = -1);
	static bool IsLeap(const int &year);

public:
	FormattedDate();
	FormattedDate(const std::string &value);
	FormattedDate(const FormattedDate &other);

	~FormattedDate();
	
	FormattedDate &operator=(const FormattedDate &other);
	
	bool operator<(const FormattedDate &other);

	void SetYear(const int &year);
	void SetYear(const std::string &year);
	void SetMonth(const int &month);
	void SetMonth(const std::string &month);
	void SetDay(const int &day);
	void SetDay(const std::string &day);

	int GetYear() const;
	int GetMonth() const;
	int GetDay() const;

	std::string ToString() const;
};