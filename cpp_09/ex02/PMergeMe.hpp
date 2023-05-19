#include <stdexcept>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <ctime>

bool IsPositiveInteger(const std::string &str);
void print(int i);

template<class T>
class PMergeMe
{
protected:
	T m_container;
	std::string m_name;

	PMergeMe()
		: m_container()
	{
		SetContainerName();
	}

	PMergeMe(const PMergeMe &other)
		: m_container(other.m_container), m_name(other.m_name)
	{

	}

	PMergeMe(char **argv)
		: m_container()
	{
		SetContainerName();

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
		m_name = other.m_name;
	}

	void SetContainerName()
	{

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
		if (m_container.size() < 2)
		{
			return;
		}
		Sort(m_container.size() / 2);
	}

	void Sort(size_t chunk_size)
	{
		if (chunk_size < 1)
		{
			return;
		}
		Sort(chunk_size / 2);

		typename T::iterator begin = m_container.begin(); 

		size_t nchunk = m_container.size() / chunk_size;
		for (size_t i = 0; i < nchunk; i += 2, std::advance(begin, chunk_size))
		{
			typename T::iterator tmp(begin);
			std::advance(begin, chunk_size);

			MergeInsert(tmp, begin, chunk_size);
		}
	}

	void MergeInsert(typename T::iterator it1, typename T::iterator it2, size_t chunk_size)
	{

	}

public:
	static void Test(char **argv)
	{
		std::time_t init = std::time(NULL);
		PMergeMe pmm(argv);
		std::time_t end = std::time(NULL);
		double process_time = std::difftime(end, init);

		std::cout << "Before : ";
		std::for_each(pmm.m_container.begin(), pmm.m_container.end(), print);
		std::cout << std::endl;

		init = std::time(NULL);
		pmm.Sort();
		end = std::time(NULL);
		double sort_time = std::difftime(end, init);

		std::cout << "After  : ";
		std::for_each(pmm.m_container.begin(), pmm.m_container.end(), print);
		std::cout << std::endl;

		std::cout << "Time to process a range of "
			<< std::setw(5) << pmm.m_container.size()
			<< " elements with "
			<< std::setw(15) << pmm.m_name << " : "
			<< std::setw(8) << process_time * 1000.0f << " us"
			<< std::endl;

		std::cout << "Time to sort a range of    "
			<< std::setw(5) << pmm.m_container.size()
			<< " elements with "
			<< std::setw(15) << pmm.m_name << " : "
			<< std::setw(8) << sort_time * 1000.0f << " us"
			<< std::endl;
	}
};

template<>
void PMergeMe<std::vector<int> >::SetContainerName()
{
	m_name = "std::vector";
}

template<>
void PMergeMe<std::list<int> >::SetContainerName()
{
	m_name = "std::list";
}

template<>
void PMergeMe<std::vector<int> >::MergeInsert(std::vector<int>::iterator it1, std::vector<int>::iterator it2, size_t chunk_size)
{
	std::vector<int> tmp(it1, it2);

	for (size_t i = 0; i < chunk_size; ++i, ++it1)
	{
		if (*it2 < tmp[i])
		{
			*it1 = *it2;
			*(++it1) = tmp[i];
		}
		else
		{
			*(++it2) = *it2;
		}
	}
}

template<>
void PMergeMe<std::list<int> >::MergeInsert(std::list<int>::iterator it1, std::list<int>::iterator it2, size_t chunk_size)
{

}