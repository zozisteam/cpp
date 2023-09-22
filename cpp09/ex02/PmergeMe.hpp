#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <sys/time.h>
#include <unistd.h>

typedef std::vector<std::pair<int, int> > vector;
typedef std::list<int> list;
class PmergeMe
{
private:
	vector vector;
	list list;
	char **str;
	// clock_t t1, fin1;
	// clock_t t2, fin2;

public:
	PmergeMe();
	PmergeMe(char **str);
	~PmergeMe();
	PmergeMe(PmergeMe const &other);
	PmergeMe &operator=(PmergeMe const &other);
	
	void push_vect();
	void fdj_algo_vect();

	void push_list();
	void fdj_algo_list();
};

#endif