#include "ListMergeMe.hpp"

ListMergeMe::ListMergeMe()
	: PMergeMe()
{

}

ListMergeMe::ListMergeMe(const ListMergeMe &other)
	: PMergeMe(other)
{

}

ListMergeMe::ListMergeMe(char **argv)
	: PMergeMe(argv)
{

}

ListMergeMe::~ListMergeMe()
{

}

ListMergeMe &ListMergeMe::operator=(const ListMergeMe &other)
{
	PMergeMe::operator=(other);

	return *this;
}

void ListMergeMe::SetContainerName()
{
	m_name = "std::list";
}

void ListMergeMe::Test(char **argv)
{
	PMergeMe::Test<ListMergeMe>(argv);
}