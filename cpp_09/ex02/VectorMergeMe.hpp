#pragma once

#include <vector>
#include "PMergeMe.hpp"

class VectorMergeMe : public PMergeMe<std::vector<int> >
{
	typedef std::vector<int>::iterator vector_iterator;

	VectorMergeMe();

	void SetContainerName();

public:
	VectorMergeMe(const VectorMergeMe &other);
	VectorMergeMe(char **argv);

	~VectorMergeMe();

	VectorMergeMe &operator=(const VectorMergeMe &other);

	static void Test(char **argv);
};