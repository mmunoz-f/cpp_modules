#include <stdexcept>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <ctime>

bool IsPositiveInteger(const std::string &str);
void print(int i);

template<class T>
T	next(T &it, size_t n)
{
	T tmp(it);
	std::advance(tmp, n);
	return tmp; 
}

template<class T>
class PMergeMe
{
	typedef typename T::iterator iterator;
	typedef std::vector<int>::iterator vector_iterator;
	typedef std::list<int>::iterator list_iterator;

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
		if (m_container.size() == 1)
		{
			return;
		}

		Sort(m_container.size());
	}

	void Sort(size_t chunk_size)
	{
		if (chunk_size <= 4)
		{
			InsertionSort(chunk_size);
			MergeSort(chunk_size);
			return;
		}

		Sort(chunk_size / 2);
		MergeSort(chunk_size);
	}

	void MergeSort(size_t chunk_size)
	{
		size_t size = m_container.size() - chunk_size * 2;
		iterator begin = m_container.begin();

		size_t count = 0;
		for (; count <= size; count += chunk_size * 2, std::advance(begin, chunk_size * 2))
		{
			MergeSort(begin, chunk_size);
		}

		if (m_container.size() - count)
		{
			iterator begin = m_container.begin();
			iterator

			MergeSort(, m_container.size() - count);
		}
	}

	void MergeSort(iterator begin, size_t chunk_size)
	{
		iterator end = next(begin, chunk_size);
		iterator it2 = end;
		iterator end2 = next(it2, chunk_size);

		MergeSort(begin, end, it2, end2, chunk_size);
	}

	void MergeSort(iterator begin1, iterator end1, iterator begin2, iterator end2, size_t total)
	{

	}

	void InsertionSort(size_t chunk_size)
	{
		size_t size = m_container.size() - chunk_size;
		iterator begin = m_container.begin();

		size_t count = 0;
		for (; count <= size; count += chunk_size, std::advance(begin, chunk_size))
		{
			InsertionSort(begin, chunk_size);
		}

		InsertionSort(begin, m_container.size() - count);
	}

	void InsertionSort(iterator begin, size_t chunk_size)
	{
		for (int i = 1; i < chunk_size; ++i)
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
void PMergeMe<std::vector<int> >::MergeSort(vector_iterator begin, vector_iterator end, vector_iterator it2, vector_iterator end2, size_t total)
{
	std::vector<int> tmp(begin, end);
	std::vector<int>::iterator it1 = tmp.begin();
	std::vector<int>::iterator end1 = tmp.end();

	for (size_t i = 0; i < total; ++i, ++begin)
	{
		if (it2 == end2 || (it1 != end1 && *it1 < *it2))
		{
			*begin = *(it1++);
		}
		else
		{
			*begin = *(it2++);
		}
	}
}

template<>
void PMergeMe<std::list<int> >::MergeSort(list_iterator it1, list_iterator end1, list_iterator it2, list_iterator end2, size_t total)
{
	for (size_t i = 0; i < total; i++)
	{
		if (it1 == end1 || (it2 != end2 && *it2 < *it1))
		{
			m_container.splice(it1, m_container, it2++);
		}
		else
		{
			it1++;
		}
	}
}