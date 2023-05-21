#include <stdexcept>
#include <cstdlib>
#include <iomanip>
#include <time.h>
#include "FormattedDate.hpp"

FormattedDate::FormattedDate()
{

}

FormattedDate::FormattedDate(const std::string &value)
{
	struct tm tm;
	const char *str = value.c_str();
	char *ret = strptime(str, "%Y-%m-%d", &tm);

	if (ret != &str[value.length()])
	{
		throw std::invalid_argument("invalid date");
	}

	SetYear(tm.tm_year + 1900);
	SetMonth(tm.tm_mon + 1);
	SetDay(tm.tm_mday);
}

FormattedDate::FormattedDate(const FormattedDate &other)
	: m_year(other.m_year), m_month(other.m_month), m_day(other.m_day)
{

}

FormattedDate::~FormattedDate()
{

}

FormattedDate &FormattedDate::operator=(const FormattedDate &other)
{
	m_year = other.m_year;
	m_month = other.m_month;
	m_day = other.m_day;

	return *this;
}

bool FormattedDate::operator==(const FormattedDate &other) const
{
	return m_year == other.m_year && m_month == other.m_month && m_day == other.m_day;
}

bool FormattedDate::operator<(const FormattedDate &other) const
{
	return m_year < other.m_year
		|| (m_year == other.m_year
			&& (m_month < other.m_month
				|| (m_month == other.m_month && m_day < other.m_day)));
}

void FormattedDate::SetYear(const int &year)
{
	if (year < 0 || year > 9999)
	{
		throw std::invalid_argument("invalid year value, expected positive integer");
	}

	m_year = year;
}

void FormattedDate::SetMonth(const int &month)
{
	if (month < 1 || month > 12)
	{
		throw std::invalid_argument("invalid month value, value must be between 1 and 12");
	}

	m_month = month;
}

void FormattedDate::SetDay(const int &day)
{
	if (day < 1 || day > MaxDaysOfMonth(m_month, m_year))
	{
		throw std::invalid_argument("invalid day value");
	}

	m_day = day;
}

int FormattedDate::GetYear() const
{
	return m_year;
}

int FormattedDate::GetMonth() const
{
	return m_month;
}

int FormattedDate::GetDay() const
{
	return m_day;
}

bool FormattedDate::IsLeap(const int &year)
{
	return (!(year % 4) && year % 100) || !(year % 400);
}

int FormattedDate::MaxDaysOfMonth(const int &month, const int &year)
{
	int months_max_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int max_days = months_max_days[month - 1];

	if (month == FEBRUARY)
	{
		if (IsLeap(year))
		{
			max_days = 29;
		}
	}

	return max_days;
}

std::ostream &operator<<(std::ostream &out, const FormattedDate &date)
{
	return out << std::setw(4) << std::setfill('0') << date.GetYear()
		<< "-" << std::setw(2) << std::setfill('0') << date.GetMonth()
		<< "-" << std::setw(2) << std::setfill('0') << date.GetDay();
}

bool FormattedDate::Closer(const FormattedDate &date1, const FormattedDate &date2) const
{
	int years_diff1 = abs(m_year - date1.m_year);
	int months_diff1 = abs(m_month - date1.m_month);
	int days_diff1 = abs(m_day - date1.m_day);
	
	int years_diff2 = abs(m_year - date2.m_year);
	int months_diff2 = abs(m_month - date2.m_month);
	int days_diff2 = abs(m_day - date2.m_day);

	return years_diff1 < years_diff2
		|| (years_diff1 == years_diff2
			&& (months_diff1 < months_diff2
				|| (months_diff1 == months_diff2 && days_diff1 < days_diff2)));
}