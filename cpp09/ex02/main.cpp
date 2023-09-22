#include "PmergeMe.hpp"

// check if a string represents a positive integer
bool IsPositiveInteger(char **argv, int argc)
{
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return false;
		}
	}
	return true;
}
int main(int argc, char **argv)
{
	std::cout << argc << std::endl;
	clock_t start, fin;
	try
	{
		if (argc < 2)
			throw std::invalid_argument("Usage: PmergeMe <positive_integer_sequence>");
		if (IsPositiveInteger(argv, argc) == false)
			throw std::invalid_argument("Usage: PmergeMe <positive_integer_sequence>");
		std::cout << "Before : ";
		if (argc < 7)
		{
			for (int i = 1; i < argc; i++)
			{
				std::cout << argv[i] << " ";
			}
		}
		else
		{
			for (size_t i = 1; i < 6; i++)
			{
				std::cout << argv[i] << " ";
			}
			std::cout << "[...]";
		}
		std::cout << std::endl;
		PmergeMe pm(argv); // vector
		start = clock();
		pm.push_vect();
		pm.fdj_algo_vect();
		fin = clock();
		std::cout << "Time to process a range of"
				  << " " << argc - 1 << " elements with std::[vector] : " << (double)(fin - start) << "us" << std::endl;
		// list
		start = clock();
		pm.push_list();
		pm.fdj_algo_list();
		fin = clock();
		std::cout << "Time to process a range of"
				  << " " << argc - 1 << " elements with std::[list] : " << (double)(fin - start) << "us" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}