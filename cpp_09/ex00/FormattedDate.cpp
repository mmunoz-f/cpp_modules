#include <stdexcept>
#include <cstdlib>
#include "utils.hpp"
#include "FormattedDate.hpp"

FormattedDate::FormattedDate()
{

}

FormattedDate::FormattedDate(const std::string &value)
{
	if (value.length() != format.length() || value[4] != '-' || value[7] != '-')
	{
		throw std::invalid_argument("invalid date format, expected yyyy-mm-dd");
	}

	SetYear(value.substr(0, 4));
	SetMonth(value.substr(5, 7));
	SetDay(value.substr(8, 10));
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
}

void FormattedDate::SetYear(const int &year)
{
	if (year < 0 || year > 9999)
	{
		throw std::invalid_argument("invalid year value, expected positive integer");
	}

	m_year = year;
}

void FormattedDate::SetYear(const std::string &year)
{
	if (IsDigit(year))
	{
		throw std::invalid_argument("invalid date format");
	}

	SetYear(std::atoi(year.c_str()));
}

void FormattedDate::SetMonth(const int &month)
{
	if (month < 1 || month > 12)
	{
		throw std::invalid_argument("invalid month value, value must be between 1 and 12");
	}

	m_month = month;
}

void FormattedDate::SetMonth(const std::string &month)
{
	if (IsDigit(month))
	{
		throw std::invalid_argument("invalid date format");
	}
	SetMonth(std::atoi(month.c_str()));
}

void FormattedDate::SetDay(const int &day)
{
	if (day < 1 || day > MaxDaysOfMonth(m_month, m_year))
	{
		throw std::invalid_argument("invalid day value");
	}

	m_day = day;
}

void FormattedDate::SetDay(const std::string &day)
{
	if (IsDigit(day))
	{
		throw std::invalid_argument("invalid date format");
	}
	SetDay(std::atoi(day.c_str()));
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

std::string FormattedDate::ToString() const
{

}

bool FormattedDate::IsLeap(const int &year)
{
	return year % 4 == 0;
}

int FormattedDate::MaxDaysOfMonth(const int &month, const int &year)
{
	int months_max_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int max_days = months_max_days[month - 1];

	if (month == Month::FEBRUARY)
	{
		if (IsLeap(year))
		{
			max_days = 29;
		}
	}

	return max_days;
}