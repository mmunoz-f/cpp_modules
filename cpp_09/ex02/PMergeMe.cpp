#include <iostream>
#include <string>

bool IsPositiveInteger(const std::string &str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}

void print(int i)
{
	std::cout << " " << i;
}