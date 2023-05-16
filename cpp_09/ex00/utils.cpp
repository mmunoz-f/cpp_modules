#include <string>
#include <algorithm>

bool IsDigit(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

bool IsFloat(const std::string &str)
{
	return str.find_first_not_of(".0123456789") == std::string::npos
			&& std::count(str.begin(), str.end(), '.');
}