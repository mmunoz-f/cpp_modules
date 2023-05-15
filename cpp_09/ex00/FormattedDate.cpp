#include <stdexcept>
#include "FormattedDate.hpp"

FormattedDate::FormattedDate()
{

}

FormattedDate::FormattedDate(const std::string &value)
{
	size_t length = value.length();
	if (format.length() != length)
	{
		throw std::invalid_argument("not a valid date format");
	}

	for (size_t pos = 0; pos < length; pos++)
	{
		
	}
}

FormattedDate::FormattedDate(const FormattedDate &other)
	: year(year), month(month), day(day)
{

}

FormattedDate::~FormattedDate()
{

}

FormattedDate &FormattedDate::operator=(const FormattedDate &other)
{
	this->year = other.year;
	this->month = other.month;
	this->day = other.day;
}