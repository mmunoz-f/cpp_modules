#include <stdexcept>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <ctime>

template<class T>
class PMergeMe
{
protected:
	T m_container;
	std::string m_name;

	PMergeMe()
		: T()
	{

	}

	PMergeMe(const PMergeMe &other)
		: T(other.m_container)
	{

	}

	PMergeMe(char **argv)
	{
		for (size_t i = 1; argv[i]; i++)
		{
			Push(argv[i]);
		}
	}

	~PMergeMe()
	{

	}

	PMergeMe &operator=(const PMergeMe &other)
	{
		m_container = other.m_container;
	}

	void Push(const char *arg)
	{
		if (!IsPositiveInteger(arg))
		{
			throw std::invalid_argument("invalid argument");
		}

		m_container.push_back(std::atoi(arg));
	}

	void Sort()
	{
		MergeSort(m_container.size() / 2);
	}

	void MergeSort(size_t size)
	{
		if (size != 1)
		{
			MergeSort(size / 2);
		}

		std::T::iterator begin = m_list.begin();
		std::T::iterator end = m_list.end();

		for (;begin != end; begin += size * 2)
		{
			if (*(begin + size) < *begin)
			{
				VectorMergeSort(begin, size);
			}
		}
	}

public:
	static void Test(char **argv)
	{
		std::time_t init = std::time(NULL);
		PMergeMe pmm(argv);
		std::time_t end = std::time(NULL);
		double process_time = std::difftime(end, init);

		std::cout << "Before : ";
		std::for_each(m_container.begin(), m_container.end(), print);
		std::cout << std::endl;

		std::time_t init = std::time(NULL);
		// pmm.Sort();
		std::time_t end = std::time(NULL);
		double sort_time = std::difftime(end, init);

		std::cout << "After  : ";
		std::for_each(m_container.begin(), m_container.end(), print);
		std::cout << std::endl;

		std::cout << "Time to process a range of "
			<< std::setw(5) << pmm.Size()
			<< " elements with "
			<< std::setw(15) << m_name << " : "
			<< process_time * 1000.0f << " us"
			<< std::endl;

		std::cout << "Time to sort a range of "
			<< std::setw(5) << pmm.Size()
			<< " elements with "
			<< std::setw(15) << m_name << " : "
			<< sort_time * 1000.0f << " us"
			<< std::endl;
	}
};

static bool IsPositiveInteger(const std::string &str);