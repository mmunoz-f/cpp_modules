#pragma once

#include <list>
#include "PMergeMe.hpp"

class ListMergeMe : public PMergeMe<std::list<int> >
{
	typedef std::list<int>::iterator list_iterator;

	ListMergeMe();

	void SetContainerName();

public:
	ListMergeMe(const ListMergeMe &other);
	ListMergeMe(char **argv);

	~ListMergeMe();

	ListMergeMe &operator=(const ListMergeMe &other);

	static void Test(char **argv);
};