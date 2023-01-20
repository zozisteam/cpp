/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:33:08 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/20 10:57:36 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
	T *array;
	unsigned int sizee;

public:
	//empty array
	Array() : sizee(0), array(nullptr)
	{
		std::cout << "ARRAY default constructor" << std::endl;
	}

	//create array of n elements
	Array(unsigned int n) : sizee(n), array(new T[n]()) {
		std::cout << "ARRAY with size constructor" << std::endl;
	}

	//Copy constructor
	Array(const Array<T> &other)
	{
		std::cout << "ARRAY copy constructor" << std::endl;
		sizee = other.sizee;
		array = new T[sizee];
		for (unsigned int i = 0; i < sizee; i++)
			array[i] = other.array[i];
	}

	// Assignment operator
	Array<T> &operator=(const Array<T> &other)
	{
		std::cout << "ARRAY assignment operator" << std::endl;
		if (this != &other)
		{
			// Deallocate memory
			delete[] array;

			sizee = other.sizee;
			array = new T[sizee];
			for (unsigned int i = 0; i < sizee; i++)
				array[i] = other.array[i];
		}
		return *this;
	}

	// Destructor
	~Array()
	{
		std::cout << "ARRAY destructor" << std::endl;
		delete[] array;
	}

	//access through array[I]
	T &operator[](unsigned int index)
	{
		if (index >= sizee)
			throw std::out_of_range("Index out of bounds");
		return array[index];
	}

	//same as ^ but const
	const T &operator[](unsigned int index) const
	{
		if (index >= sizee)
			throw std::out_of_range("Index out of bounds");//throwing exception in case out of bounds
		return array[index];
	}

	// Member function that returns the number of elements in the array
	unsigned int size() const { return sizee; }
};

#endif