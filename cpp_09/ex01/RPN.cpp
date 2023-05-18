#include <limits.h>
#include <cctype>
#include "RPN.hpp"

RPN::RPN()
	: m_stack()
{

}

RPN::RPN(const RPN &other)
	: m_stack(other.m_stack)
{

}

RPN::RPN(const std::string &arg)
{
	std::string::const_iterator it = arg.begin();
	std::string::const_iterator end = arg.end();

	for (; it != end; it++)
	{
		Push(*it);
	}
}

RPN::~RPN()
{

}

RPN	&RPN::operator=(const RPN &other)
{
	m_stack = other.m_stack;

	return *this;
}

void RPN::Push(const char c)
{
	if (c == ' ')
	{
		return;
	}
	else if (IsDigit(c))
	{
		m_stack.push(ToDigit(c));
	}
	else
	{
		Operate(c);
	}
}

void RPN::Operate(const char c)
{
	const method_function operations[] = {&RPN::Sum, &RPN::Substract, &RPN::Div, &RPN::Multiply};

	size_t pos = available_operations.find(c);
	
	if (pos == std::string::npos)
	{
		throw std::invalid_argument("invalid character");
	}
	else
	{
		(this->*operations[pos])();
	}
}

int RPN::Pop()
{
	if (m_stack.empty())
	{
		throw std::invalid_argument("wrong input");
	}

	int ret = m_stack.top();
	m_stack.pop();
	return ret;
}

void RPN::Sum()
{
	long int op1 = Pop();
	long int op2 = Pop();

	long int result = op2 + op1;
	if (result < INT_MIN || result > INT_MAX)
	{
		throw std::out_of_range("integer overflow");
	}

	m_stack.push(op2 + op1);
}

void RPN::Substract()
{
	long int op1 = Pop();
	long int op2 = Pop();

	long int result = op2 - op1;
	if (result < INT_MIN || result > INT_MAX)
	{
		throw std::out_of_range("integer overflow");
	}

	m_stack.push(op2 - op1);
}

void RPN::Multiply()
{
	long int op1 = Pop();
	long int op2 = Pop();

	long int result = op2 * op1;
	if (result < INT_MIN || result > INT_MAX)
	{
		throw std::out_of_range("integer overflow");
	}

	m_stack.push(op2 * op1);
}

void RPN::Div()
{
	long int op1 = Pop();
	if (op1 == 0)
	{
		throw DivisionByZeroError();
	}

	long int op2 = Pop();

	long int result = op2 / op1;
	if (result < INT_MIN || result > INT_MAX)
	{
		throw std::out_of_range("integer overflow");
	}

	m_stack.push(op2 / op1);
}

int RPN::GetSolution() const
{
	if (m_stack.empty())
	{
		return 0;
	}

	return m_stack.top();
}

bool RPN::IsDigit(const char c)
{
	return std::isdigit(static_cast<unsigned char>(c));
}

int RPN::ToDigit(const char c)
{
	return c - '0';
}

const char *RPN::DivisionByZeroError::what() const throw ()
{
	return "division by zero";
}

const std::string RPN::available_operations = "+-/*";