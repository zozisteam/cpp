#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : vector(), list(), str()
{
}

PmergeMe::PmergeMe(char **str) : vector(), list()
{
	this->str = &(str[1]);
}
PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe(PmergeMe const &other)
{
	*this = other;
}
PmergeMe &PmergeMe::operator=(PmergeMe const &other)
{
	this->vector = other.vector;
	this->list = other.list;
	this->str = other.str;
	return *this;
}

// populate 'vector' with pairs from 'str'
void PmergeMe::push_vect()
{
	if (str == nullptr)
		return;

	int i;
	for (i = 0; str[i] != nullptr; i++)
	{
		long y = atol(str[i]);
		if (y > INT_MAX)
			throw std::invalid_argument("Error: num too big.");

		if (i % 2 == 0)
			vector.push_back(std::make_pair(atoi(str[i]), -1)); // add -1 first then change it in else block
		else
		{
			vector.rbegin()->second = atoi(str[i]);
			if (vector.rbegin()->first < vector.rbegin()->second)
				std::swap(vector.rbegin()->first, vector.rbegin()->second);
		}
	}
}
// helper function to merge two sorted halves
void merge(vector &arr, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;
	// Create temporary arrays
	vector leftArr(n1), rightArr(n2);
	// Copy data to temporary arrays
	for (int i = 0; i < n1; ++i)
		leftArr[i] = arr[left + i];
	for (int j = 0; j < n2; ++j)
		rightArr[j] = arr[mid + 1 + j];

	// Merge the temporary arrays back into arr[left..right]
	int i = 0, j = 0, k = left; //i to iterate leftarr, j to iterate rightarr, k to put elements back in arr
	while (i < n1 && j < n2) //check if elements left in both halves
	{
		if (leftArr[i] <= rightArr[j])
		{
			arr[k] = leftArr[i];
			++i;
		}
		else
		{
			arr[k] = rightArr[j];
			++j;
		}
		++k;
	}
	// Copy the remaining elements of leftArr, if any
	while (i < n1)
	{
		arr[k] = leftArr[i];
		++i;
		++k;
	}
	// Copy the remaining elements of rightArr, if any
	while (j < n2)
	{
		arr[k] = rightArr[j];
		++j;
		++k;
	}
}
// main function to sort 'vector'
// recursive function to split input array into two halves
// and sort each half separately before merging them
void mergeSort(vector &arr, int left, int right)
{
	if (left < right) // base case: subarray has 1 element or empty
	{
		int mid = left + (right - left) / 2;
		// sort first and second halves
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		// after both halves r sorted -> merge
		merge(arr, left, mid, right);
	}
}
// sort the final 'vector'
void PmergeMe::fdj_algo_vect()
{
	// std::cout << "before merge sort: " << std::endl;
	// for (size_t i = 0; i < vector.size(); i++)
	// {
	// 	std::cout << vector[i].first << " " << vector[i].second << "| " << std::endl;
	// }
	mergeSort(vector, 0, vector.size() - 1);
	// create a sorted vector of individual elements from the sorted pairs
	std::vector<int> sorted_vector;
	for (size_t i = 0; i < vector.size(); i++)
	{
		sorted_vector.push_back(vector[i].first);
		std::vector<int>::iterator it = std::lower_bound(sorted_vector.begin(), sorted_vector.end(), vector[i].second);
		sorted_vector.insert(it, vector[i].second);
	}
	std::cout << "After: ";
	if (sorted_vector[0] == -1)
		sorted_vector.erase(sorted_vector.begin());
	if (sorted_vector.size() < 6)
	{
		for (std::vector<int>::const_iterator it = sorted_vector.begin(); it != sorted_vector.end(); ++it)
			std::cout << *it << " ";
	}
	else
	{
		for (size_t i = 0; i < 5; ++i)
			std::cout << sorted_vector[i] << " ";
		std::cout << "[...]";
	}
	std::cout << std::endl;
}

void PmergeMe::push_list()
{
	if (str == nullptr)
		return;

	for (int i = 0; str[i] != nullptr; i++)
	{
		long num = atol(str[i]);

		if (num > INT_MAX || num < INT_MIN)
			throw std::invalid_argument("Error: Number out of range.");

		list.push_back(atoi(str[i]));
	}
}

// Merge two sorted halves of a list
void merge_list(list &arr, list &left, list &right)
{
	std::list<int>::iterator i = left.begin();
	std::list<int>::iterator j = right.begin();

	while (i != left.end() && j != right.end())
	{
		if (*i < *j)
		{
			arr.push_back(*i);
			++i;
		}
		else
		{
			arr.push_back(*j);
			++j;
		}
	}

	while (i != left.end())
	{
		arr.push_back(*i);
		++i;
	}

	while (j != right.end())
	{
		arr.push_back(*j);
		++j;
	}
}

// Main function to sort a list using Merge Sort
void merge_sort_list(list &arr)
{
	if (arr.size() < 2) //base case: 1 or empty elements in list
		return;

	list left, right;
	std::list<int>::iterator it = arr.begin();
	int count = 0;
	while (it != arr.end())
	{
		if (count < (int)arr.size() / 2)
			left.push_back(*it);
		else
			right.push_back(*it);

		++count;
		++it;
	}

	merge_sort_list(left);
	merge_sort_list(right);

	arr.clear();
	merge_list(arr, left, right);
}

// Perform Merge Sort on a list and then print the sorted list
void PmergeMe::fdj_algo_list()
{
	// std::cout << "Before: ";
	// for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	// {
	// 	std::cout << *it << " ";
	// }
	// Assume 'list' is a class member variable of type std::list<int>
	merge_sort_list(list);

	// std::cout << "After: ";
	// for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	// {
	// 	std::cout << *it << " ";
	// }
	// std::cout << std::endl;
}
