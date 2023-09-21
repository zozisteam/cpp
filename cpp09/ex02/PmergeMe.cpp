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
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			long y = atol(str[i]);
			if (y > INT_MAX)
				throw std::invalid_argument("Error: num too big.");
			vector.push_back(std::make_pair(atoi(str[i]), -1));
		}
		else
		{
			vector.rbegin()->second = atoi(str[i]);
			if (vector.rbegin()->first < vector.rbegin()->second)
				std::swap(vector.rbegin()->first, vector.rbegin()->second);
		}
	}
}
// Merge Sort helper function to merge two sorted halves
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
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2)
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
void mergeSort(vector &arr, int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		// sort first and second halves
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		// sort the sorted halves
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
	std::cout << "After: " ;
	for (size_t i = 0; i < sorted_vector.size(); i++)
	{
		std::cout << sorted_vector[i] << " ";
	}
	std::cout << std::endl;
}
