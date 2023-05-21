#pragma once

#include <stdexcept>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <ctime>

bool IsPositiveInteger(const std::string &str);
void print(int i);

template<class Container>
Container	next(Container &it, size_t n)
{
	Container tmp(it);
	std::advance(tmp, n);
	return tmp; 
}

template<class Container>
class PMergeMe
{
	typedef typename Container::iterator iterator;

protected:
	Container m_container;
	std::string m_name;

	PMergeMe()
		: m_container()
	{
		SetContainerName();
	}

	virtual void SetContainerName() {};

	void Push(const char *arg)
	{
		if (!IsPositiveInteger(arg))
		{
			throw std::invalid_argument("invalid argument");
		}

		m_container.push_back(std::atoi(arg));
	}

	virtual void Sort(iterator begin, iterator end)
	{
		size_t size = std::distance(begin, end);
		if (size <= 2)
		{
			InsertionSort(begin, end);
		}
		else
		{
			iterator middle = next(begin, size / 2);

			Sort(begin, middle);
			Sort(middle, end);
			MergeSort(begin, middle, end);
		}
	}

	virtual void MergeSort(iterator begin, iterator middle, iterator end)
	{
		Container tmp(begin, middle);
		iterator it1 = tmp.begin();
		iterator end1 = tmp.end();

		for (;it1 != end1 || middle != end; ++begin)
		{
			if (middle == end || (it1 != end1 && *it1 < *middle))
			{
				*begin = *(it1++);
			}
			else
			{
				*begin = *(middle++);
			}
		}
	}

	void InsertionSort(iterator begin, iterator end)
	{
		size_t size = std::distance(begin, end);

		for (int i = 1; i < size; ++i)
		{
			int j = i - 1;
			int value = *next(begin, i);

			for (;j >= 0 && *next(begin, j) > value;)
			{
				*next(begin, j + 1) = *next(begin, j);
				--j;
			}

			*next(begin, j + 1) = value;
		}
	}

public:
	PMergeMe(const PMergeMe &other)
		: m_container(other.m_container), m_name(other.m_name)
	{

	}

	virtual ~PMergeMe()
	{

	}

	PMergeMe &operator=(const PMergeMe &other)
	{
		m_container = other.m_container;
		m_name = other.m_name;

		return *this;
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

	void Sort()
	{
		if (m_container.size() == 1)
		{
			return;
		}

		Sort(m_container.begin(), m_container.end());
	}

	template<class T>
	static void Test(char **argv)
	{
		std::clock_t init = std::clock();
		T pmm(argv);
		std::clock_t end = std::clock();
		double process_time = static_cast<double>(end - init) / CLOCKS_PER_SEC;

		std::cout << "Before : ";
		std::for_each(pmm.m_container.begin(), pmm.m_container.end(), print);
		std::cout << std::endl;

		init = std::clock();
		pmm.Sort();
		end = std::clock();
		double sort_time = static_cast<double>(end - init) / CLOCKS_PER_SEC;

		std::cout << "After  : ";
		std::for_each(pmm.m_container.begin(), pmm.m_container.end(), print);
		std::cout << std::endl;

		std::cout << "Time to process a range of "
			<< std::setw(5) << pmm.m_container.size()
			<< " elements with "
			<< std::setw(15) << pmm.m_name << " : "
			<< std::setw(8) << (process_time + sort_time) * 1000.0f << " us"
			<< std::endl;
	}
};