#pragma once

#include <string>

#define FEBRUARY 2

class FormattedDate
{
	int m_year;
	int m_month;
	int m_day;

	static int MaxDaysOfMonth(const int &month, const int &year);
	static bool IsLeap(const int &year);

public:
	FormattedDate();
	FormattedDate(const std::string &value);
	FormattedDate(const FormattedDate &other);

	~FormattedDate();
	
	FormattedDate &operator=(const FormattedDate &other);

	bool operator<(const FormattedDate &other) const;

	void SetYear(const int &year);
	void SetMonth(const int &month);
	void SetDay(const int &day);

	int GetYear() const;
	int GetMonth() const;
	int GetDay() const;

	std::string ToString() const;
};