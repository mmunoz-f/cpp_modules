#include "VectorMergeMe.hpp"

VectorMergeMe::VectorMergeMe()
	: PMergeMe()
{

}

VectorMergeMe::VectorMergeMe(const VectorMergeMe &other)
	: PMergeMe(other)
{

}

VectorMergeMe::VectorMergeMe(char **argv)
	: PMergeMe(argv)
{

}

VectorMergeMe::~VectorMergeMe()
{

}

VectorMergeMe &VectorMergeMe::operator=(const VectorMergeMe &other)
{
	PMergeMe::operator=(other);

	return *this;
}

void VectorMergeMe::SetContainerName()
{
	m_name = "std::vector";
}

void VectorMergeMe::Test(char **argv)
{
	PMergeMe::Test<VectorMergeMe>(argv);
}