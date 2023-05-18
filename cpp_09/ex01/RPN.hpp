#include <stdexcept>
#include <string>
#include <stack>

class RPN
{
	typedef void(RPN::*method_function)(void); 

	const std::string available_operations = "+-/*";

	std::stack<int> m_stack;

	RPN();
	RPN(const RPN &other);

	RPN &operator=(const RPN &other);

	void Push(const char c);
	void Operate(const char c);
	int Pop();

	void Sum();
	void Substract();
	void Div();
	void Multiply();

	static bool IsDigit(const char c);
	static int ToDigit(const char c);

public:
	RPN(const std::string &arg);

	~RPN();

	int GetSolution() const;

	class DivisionByZeroError : public std::exception
	{
		const char *what() const throw ();
	};
};